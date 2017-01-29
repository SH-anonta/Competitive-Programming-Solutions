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
#define sf scanf
#define pf printf
#define PP cin.get();
#define endl "\n"
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}


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
bool comp(const int a,const int b){return a>b;}
}

const int sss= 1E6;

vint g[209];
int color[209];
bool vis[209];

int RC, BC;
bool bipart(int s){
    vis[s]= 1;
    color[s]= 1;
    
    RC++;
    
    int u, len, next;
    queue<int> q;
    q.push(s);
    
    while(!q.empty()){
        u= q.front();
        q.pop();
        
        len= g[u].size();
        for(int i= 0; i<len; i++){
            next= g[u][i];
            if(color[next] == color[u]){
                return false;
            }
            if(!vis[next]){
                color[next]= (-1)*color[u];
                if(color[u] == 1) BC++;
                else RC++;
                
                q.push(next);
                vis[next]= 1;
            }
        }
    }
    
    return true;
}

void solve(void){
    int Tc;
    int n, m, u, v;
    
    cin>>Tc;
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>n>>m;
        int rc= 0, bc= 0, cc= 0;
        
//        if(m == 0) {
//            cout<< n<<endl;
//            continue;
//        }
        for(int i= i= 0; i<n; i++){
            g[i].clear();
            color[i]= 0; 
            vis[i]= 0;
        }
        
        while(m--){
            cin>>u>>v;
            
            g[u].push_back(v);
            g[v].push_back(u);
        }
        
        bool bip= true;
        for(int i= 0; i<n; i++){
            if(!vis[i]){
                RC= BC= 0;
                bip= bipart(i);
                if(RC == 0) RC =1;
                if(BC == 0) BC =1;
                cc+= min(RC, BC);
            }
            if(bip == false) break;
        }
        
//        DA(color, n);
        if(bip == false){
            cout<< "-1" <<endl;
            continue;
        }
        
        cout<< cc <<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    
    return 0;
}
