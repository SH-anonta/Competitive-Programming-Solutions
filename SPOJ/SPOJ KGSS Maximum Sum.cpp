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

template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
}

const int sss= 20+ 1E5;

int a[sss];

//first is max value of range
//second is index of max value of range
pint tree[4*sss];

void build(int hi, int l, int r){
    if(l == r){
        tree[hi]= pint(a[l], l);
        return;
    }
    
    int m= (l+r)/2;
    
    build(2*hi, l, m);
    build(2*hi+1, m+1, r);
    
    tree[hi]= max(tree[2*hi],tree[2*hi+1]);
}

pint query(int hi, int l, int r, int st, int nd){
    if(l >= st && r <= nd){
        return tree[hi];
    }
    
    if(l > nd || r < st){
        return pint(INT_MIN, INT_MIN);
    }
    
    int m= (l+r)/2;
    
    pint a, b;
    a= query(2*hi, l, m, st, nd);
    b= query(2*hi+1, m+1, r, st, nd);
    
    return max(a, b);
}

void update(int hi, int l, int r, int idx, int x){
    if(l == r && l == idx){
        tree[hi].first= x;
        a[l]= x;
        return;
    }
    
    int m= (l+r)/2;
    
    if(m >= idx) update(2*hi, l, m, idx, x);
    else update(2*hi+1, m+1, r, idx, x);
    
    tree[hi]= max(tree[2*hi],tree[2*hi+1]);
}

void solve(void){
    int n, q;
    
    sf("%d", &n);
    for(int i= 1; i<=n; i++){
        sf("%d", &a[i]);
    }
    
    build(1, 1, n);
    
    char com, dump;
    int l, r, x, idx;
    
    sf("%d", &q);
    while(q--){
//        sf("%c", &com);
        cin>>com;
        if(com == 'Q'){
            sf("%d%d", &l, &r);
            //index of first max
            int fmx= query(1,1,n,l,r).second;
            int smx1= INT_MIN, smx2= INT_MIN;
            
            if(fmx != l){
                smx1 = query(1,1,n, l, fmx-1).first;
            }
            if(fmx != r){
                smx2 = query(1,1,n, fmx+1, r).first;
            }
            
            pf("%d\n", a[fmx] + max(smx1, smx2));
        }
        else if(com == 'U'){
            sf("%d%d", &idx, &x);
            update(1, 1, n, idx, x);
        }
        
    }
    
}



int main(void){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//  freopen("D:/input.txt", "r", stdin);
    solve();
    
    return 0;
}
