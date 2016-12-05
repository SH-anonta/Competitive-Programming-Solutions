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
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4c ", MT[r_][c_]);NL}
 
//constants
const int SZ= 1E6;
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;
}

char g[111][111];
int movex[8]= {-1, -1, -1,  0, 0,  1,1, 1};
int movey[8]= {-1,  0,  1, -1, 1, -1, 0, 1};

int N, M;
void dfs(int a, int b){
    if(a < 0 || b<0 || a>= M || b >= N) return;
    if(g[a][b] == '*') return;
    
    g[a][b] = '*';
    
    for(int i= 0; i<8; i++){
        dfs(a+movex[i], b+movey[i]);
    }
}

void solve(void){
    int Tc;
    int n, m;
    
    
    while(cin>>m>>n && m!=0)
    {
        N= n;
        M= m;
        for(int i= 0; i<m; i++){
            cin.ignore();
            for(int j= 0; j<n; j++){
                g[i][j]= cin.get();
            }
        }
        
        int cc= 0;
        for(int i= 0; i<m; i++){
            for(int j= 0; j<n; j++){
                if(g[i][j] == '@'){
                    cc++;
                    dfs(i,j);
                }
            }
            
        }
        
        cout<< cc <<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
