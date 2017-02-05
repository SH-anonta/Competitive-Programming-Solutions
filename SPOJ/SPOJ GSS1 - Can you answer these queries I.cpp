//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

//FOLD ME
namespace{
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

//Macros
int CC_;
#define sf scanf
#define pf printf
#define endl "\n"
#define PP cin.get();
#define NL cout<<endl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));


//constants
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;
}

class node{
public:
    LL sum, maxsum, presum, postsum;
    node(){}
    node(LL a,LL b,LL c,LL d){
        sum= a;
        maxsum= b;
        presum= c;
        postsum= d;
    }
    
    node(node l, node r){
        sum= l.sum +r.sum;
        presum= max(l.presum, r.presum+ l.sum);
        postsum= max(r.postsum, l.postsum+ r.sum);
        maxsum= max(presum, max(postsum, max(l.maxsum, max(r.maxsum, l.postsum+r.presum))));
    }
};


const int sss= 50009;
const int NINF= INT_MIN;
LL a[sss];
node tree[4*sss];

LL mxsum(int x, int y){
    LL mxsf= a[x];
    LL mxc = a[x];
    
    for(int i= x+1; i<= y; i++){
        mxc= max(mxc, a[i]);
        mxsf= max(mxsf, mxc);
    }
    
    return mxsf;
}

void build(int hi, int l, int r){
    if(l == r){
        tree[hi].sum= a[l];
        tree[hi].maxsum= a[l];
        tree[hi].presum= a[l];
        tree[hi].postsum= a[l];
        
        return;
    }
    
    int m= (l+r)/2;
    
    build(2*hi, l, m);
    build(2*hi+1, m+1, r);
    
    tree[hi]= node(tree[2*hi], tree[2*hi+1]);
}

node query(int hi, int l, int r, int s, int e){
    if(l >= s && r <= e){
        return tree[hi];
    }
    
    if(l >e || r < s){
        return node(NINF,NINF,NINF,NINF);
    }
    
    int m= (l+r)/2;
    
    node a, b;
    
    a= query(2*hi, l, m, s, e);
    b= query(2*hi+1, m+1, r, s, e);
    
    return node(a, b);
}

void solve(void){
    int n, q;
    
    sf("%d", &n);
    for(int i= 1; i<= n; i++){
        sf("%lld", &a[i]);
    }
    sf("%d", &q);
    
    build(1, 1, n);

    int i, j;
    while(q--){
        sf("%d%d", &i, &j);
        
//        pf("Dummy: %lld\n",mxsum(i, j));
        node ans= query(1, 1, n, i, j);
        
        pf("%lld\n", ans.maxsum);
    }

}



int main(void){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//  freopen("D:/input.txt", "r", stdin);
    solve();
    
    
    return 0;
}
