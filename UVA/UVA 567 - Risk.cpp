//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

//FOLD ME!!!
namespace{
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef stringstream strstream;
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

//constants
const int SZ= 1E6;
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;
}

vint g[26];
bool vis[26];
int dist[26];

void bfs(int s){
    memset(vis, 0, sizeof(vis));
    
    int len, x, cu;
    queue<int> q;
    
    q.push(s);
    vis[s]= true;
    dist[s]= 0;
    
    while(!q.empty()){
        cu= q.front();
        len= g[cu].size();
        q.pop();
        
        for(int i= 0; i<len; i++){
            x= g[cu][i];
            if(vis[x] == true) continue;
            
            vis[x]= true;
            dist[x]= dist[cu]+1;
            q.push(x);
        }
        
    }
}


void solve(void){
    int n, adj, u, v;
    
    int cas= 1;
    while(1){
        for(int i= 1; i<21; i++) g[i].clear();
        
        
        for(int i= 1; i<20; i++){
            if(sf("%d", &adj) != 1) return;
            
            u= i;
            while(adj--){
                sf("%d", &v);
                g[u].push_back(v);
                g[v].push_back(u);
            }
        }
        
        sf("%d", &n);
        pf("Test Set #%d\n", cas);
        while(n--){
            sf("%d%d", &u, &v);
            
            bfs(u);
            pf("%2d to %2d: %d\n", u, v, dist[v]);
        }
        pf("\n");
        cas++;
        
    }

}


int main(void){
    solve();
   

    
    return 0;
}
