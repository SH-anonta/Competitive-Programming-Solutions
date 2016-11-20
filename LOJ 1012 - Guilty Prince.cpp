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

int reached, N,M;

char g[22][22];

void dfs(int x, int y){
    if(x < 0 || x>=N || y<0 || y>=M || g[x][y] == '#') return;
    
    reached++;
    g[x][y]= '#';
    
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}

void solve(void){
    int Tc;
    int m,n, ii,jj;
    
    cin>>Tc;
    cin.ignore();
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        reached= 0;
        cin>>m>>n;
        
        M= m;
        N= n;
        for(int i= 0; i<n; i++){
            for(int j= 0; j<m; j++){
                cin>>g[i][j];
                
                if(g[i][j] == '@') {
                    ii= i;
                    jj= j;
                }
            }
            cin.ignore();
        }
        
        dfs(ii,jj);
        cout<<"Case " << Case <<": " << reached <<"\n";
    }
    
    

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
