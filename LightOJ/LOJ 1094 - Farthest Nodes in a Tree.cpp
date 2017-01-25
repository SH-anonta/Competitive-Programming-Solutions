//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

//FOLD ME!!!
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
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));


//constants
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
template <class T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>void tobin(T n,char*bin){int pos= 1<<((int)log2(n));while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <class T>int strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != string::npos){p = s.find(tgt, p+1);oc++;}return oc;}
template <class T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0])? 'A'-10: '0');for(int i=1;num[i];i++){if(num[i]>='A'&& num[i]<='Z')num[i]-='A'-10;else num[i]-='0';dec*= b;dec+= num[i];}return dec;}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!(e&1)){int temp=bigMod(b,e/2,m)%m;return(temp*temp)%m;}else return((b%m)*(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool comp(const int a,const int b){return a>b;}
}

const int sss= 30004;

vector<pint> g[sss];
int p[sss];
bool fst;
int rt;
pint dfs(int n, int cost){   
    int len= g[n].size();
    
    if(len == 1 && n != rt){
//        DD(n)
//        DD(cost)
        return pint(cost, n);
    }
    
    pint mx= pint(0, 0), tmp;
    int x;
       
    for(int i= 0; i<len; i++){
        x= g[n][i].second;
        
        if(p[n] != x){
            p[x]= n;
            tmp= dfs(x, cost+g[n][i].first);
            if(mx.first < tmp.first){
                mx = tmp;
            }
        }
        
    }
    
    return mx;
}

void solve(void){
    int Tc;
    int n, u, v, w;
    
    cin>>Tc;
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>n;
        for(int i= 0; i<n; i++){
            g[i].clear();
            p[i]= i;
        }
        for(int i= 0; i<n-1; i++){
            cin>>u>>v>>w;
            g[u].push_back(pint(w, v));
            g[v].push_back(pint(w, u));
        }
        
        p[0]= 0;
        rt= 0;
        pint enda= dfs(rt, 0);
        
        rt= enda.second;
        
//        DD(enda.second)

        for(int i= 0; i<n; i++){
            p[i]= i;
        }
        pint endb= dfs(rt, 0);
        
//        DD(endb.second)
        
        cout<<"Case " << Case <<": " << endb.first <<"\n";
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    
    return 0;
}
