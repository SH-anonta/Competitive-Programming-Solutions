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
#define NL cout<<endl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));


}

const int sss= 1009;
int rea[sss];
int start[sss];
bool vis[sss];
vint g[sss];

void dfs(int n){
    if(vis[n]) return;
    
    vis[n]= 1;
    rea[n]++;
    
    for(int i= 0, len= g[n].size(); i<len; i++){
        dfs(g[n][i]);
    }
}

void solve(void){
    int Tc;
    int n, m, k, u, v;
    
    cin>>Tc;
    cin.ignore();
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>k>>n>>m;
        for(int i= 1; i<=n; i++){
            g[i].clear();
            rea[i]= 0;
        }
        
        for(int i= 1; i<= k; i++){
            cin>>start[i];
        }
        
        while(m--){
            cin>>u>>v;
            g[u].push_back(v);
        }
        
        for(int i= 1; i<= k; i++){
            for(int i= 1; i<=n; i++){
                vis[i]= 0;
            } 
            
            dfs(start[i]);
            
        }
        
        int c= 0;
        for(int i= 1; i<=n; i++){
            if(rea[i] == k){
                c++;
            }
        }
        cout<<"Case " << Case <<": " << c <<"\n";
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//  freopen("D:/input.txt", "r", stdin);
    solve();
    
    
    return 0;
}
