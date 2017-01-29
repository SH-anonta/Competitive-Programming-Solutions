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
#define FF first
#define sf scanf
#define ZZ second
#define pf printf
#define PP cin.get();
#define NL cout<<endl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;


//constants
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;
}

//input stays here
int a[100005];
int tree[400020];

//hi = heap index
//l and r are current node's segment range
void build(int hi, int l, int r){
    if(l == r){
        tree[hi]= a[l];
        return;
    }
    
    int m= (l+r)/2;
    build(2*hi, l, m);
    build(2*hi+1, m+1, r);
    
    tree[hi]= min(tree[2*hi],tree[2*hi+1]);
}


//hi = heap index
//l and r are current node's segment range
//s and e are range of query 
int query(int hi, int l,int r,int s,int e){
    if(l > e || r < s) return INT_MAX;
    if(l>= s && r<= e)return tree[hi];
    
    int m= (l+r)/2;
    int a= query(2*hi, l, m, s, e);
    int b= query(2*hi+1, m+1, r, s, e);
    return min(a,b);
}

void solve(void){
    int Tc;
    int n, q;
    
    cin>>Tc;
    
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>n>>q;
        for(int i= 1; i<=n; i++){
            sf("%d", &a[i]);
        }
        
        build(1, 1, n);
        
        int i, j;
        pf("Case %d:\n", Case);
        while(q--){
            sf("%d%d", &i, &j);
            pf("%d\n", query(1, 1, n, i, j));
            
        }
        
    }

}



int main(void){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    
    return 0;
}
