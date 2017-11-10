//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

//FOLD ME!!!
namespace{
typedef long long LL;
typedef vector<int> vint;
typedef unsigned long long ULL;
typedef pair<ULL,int> pint;

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

//constants
const int SZ= 1E6;
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
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e/2,m)%m;return(temp*temp)%m;}else return((b%m)*(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool comp(const int a,const int b){return a>b;}
}

vector<pint> g[100001];
ULL dist[100005];
int p[100005];

priority_queue<pint, vector<pint>, greater<pint> >  pq;

void djk(int s){
    ULL len, x, u, d;
    pint front, v;
    
    dist[s]= 0;
    p[s]= s;
    
    pq.push(pint(0,s));
    
    while(!pq.empty()){
        front= pq.top();
        pq.pop();
        d= front.first;
        u= front.second;
        len= g[u].size();
        
        if(d > dist[u]) continue;
        for(ULL i= 0; i<len; i++){
            v= g[u][i];
            
            if(dist[u]+v.second < dist[v.first]){
                dist[v.first]= dist[u] + v.second;
                pq.push(pint(dist[v.first], v.first));
                p[v.first]= u;
            }
        }
    }
    
}

void prnt(int n){
    if(p[n] == n){
        cout<< n<< " ";
        return;
    }
    
    prnt(p[n]);
    cout<< n << " ";
}

void solve(void){
    ULL n, m, u, v, w;
    
    cin>>n>>m;
    
    for(int i= 1; i<=n; i++) dist[i]= (1<<61)-1;
    while(m--){
        cin>>u>>v>>w;
        g[u].push_back(pint(v,w));
        g[v].push_back(pint(u,w));
    }
    
    p[n]= -1;
    djk(1);
    
    if(p[n] == -1)
        cout<< -1;
    else 
        prnt(n);
    
    cout<<endl;
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
   
    
    return 0;
}