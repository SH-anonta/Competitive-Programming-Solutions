#include <bits/stdc++.h>

using namespace std;
int CC_;

#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);

const int sss= 100005;

class node{
public:
    bool bit;
    bool flip;
    node(){}
    node(bool flp, int val){flip =flp; bit = val;}
};

char bits[sss];
bool a[sss];
node tree[4*sss];


void build(int hi, int l, int r){
//    DD(l <<" "<< r)
    if(l == r){
        tree[hi]= node(false, a[l]);
        return;
    }
    
    int m= (l+r)/2;
    
    build(2*hi, l, m);
    build(2*hi+1, m+1, r);
    
    tree[hi].flip= false;
}

void update(int hi, int l, int r, int s, int e){   
    if(l  > e || r < s) return;
    
    if(l >= s && r <= e){
        tree[hi].flip= !(tree[hi].flip);
        return;
    }
    
    int m= (l+r)/2;
    
    update(2*hi, l, m, s, e);
    update(2*hi+1, m+1, r, s, e);
}

bool query(int hi, int l, int r, int idx){
    if(l == idx && r == l){
        if(tree[hi].flip) return !(tree[hi].bit);
        return tree[hi].bit;
    }
    
    int m= (l+r)/2;
    
    bool cbit;
    if(idx <= m) {
        cbit= query(2*hi, l, m, idx);
    }
    else{
        cbit= query(2*hi+1, m+1, r,idx);
    }
    
    if(tree[hi].flip){
//        DD(hi)
        cbit= !cbit;
    }
    return cbit;
}

void solve(){
    int n, q, t, l,r, ca=1;
    
    scanf("%d", &t);
    
    char c, com;
    while(t--){
        scanf("%s", bits);
        n= strlen(bits);
        for(int i =0; i<n; i++){
            if(bits[i] == '1')
                a[i+1] = 1;
            else 
                a[i+1]= 0;
        }
        
        
        build(1, 1, n);
        scanf("%d", &q);
                
                
        printf("Case %d:\n", ca++);
        while(q--){
            getchar();      //get the extra new line
            scanf("%c", &com);
//            cin>>com;
            
            if(com == 'I'){
                scanf("%d%d", &l, &r);
                update(1, 1, n, l, r);
            }
            else if(com == 'Q'){
                scanf("%d", &l);
                printf("%c\n", ((query(1,1,n,l))? '1' : '0'));
            }
        }
        
    }
    
    
    
}

int main(void)
{
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    return 0;
}