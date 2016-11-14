//#Name: Sofen Haque Anonta  #Problm:
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

vint g[206];
char stat[206];

bool bfs(int st){
    queue <int> q;
    
    int len, cu, x;
    stat[st]= 'r';
    q.push(st);
    
    while(!q.empty()){
        cu= q.front();
        q.pop();
        len= g[cu].size();
        
        for(int i= 0; i<len; i++){
            x= g[cu][i];
            
            if(stat[x] == 'u'){
                if(stat[cu] == 'r') stat[x] == 'b';
                else stat[x]= 'r';
                q.push(x);
            }
            else if(stat[x] == stat[cu]) return 0;
        }
        
    }
    
    return true;
    
}

void solve(void){
    int Tc;
    int n,m, a, b;
    
    while(cin>>n && n!= 0)
    {
        cin>>m;
        for(int i= 0; i<=n; i++){
            g[i].clear();
            stat[i]= 'u';
        }
        
        while(m--){
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        
        stat[0]= 'r';
        cout<< ((bfs(0)) ? "BICOLORABLE." : "NOT BICOLORABLE.") <<endl;
    }

}


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
