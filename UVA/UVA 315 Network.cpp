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
#define endl "\n"
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
}

const int sss= 1000010;
int en[sss];
int low[sss];
vint g[sss];
bool vis[sss];
bool art[sss];
int p[sss];

int tim;
int root;
int rchilds;

void dfs(int n){
    low[n]= en[n]= tim++;
    vis[n]= 1;
    
    int len= g[n].size(), x; 
    
    for(int i= 0; i<len; i++){
        x= g[n][i];
        if(!vis[x]){
            
            p[x]= n;
            if(root == n) rchilds++;
            dfs(x);
            
            if(low[x] >= en[n] && n != root) art[n]= 1;
            
            low[n]= min(low[n], low[x]);
        }
        else if(x != p[n]){
            low[n]= min(low[n], en[x]);
        }
    }
}

void solve(void){
    int n,  u, v, m;
    
    while(cin>>n && n!= 0)
    {
        tim= 1;
        root= 1;
        rchilds= 0;
        p[1]= 1;
        
        for(int i= 1; i<=n; i++){
            g[i].clear();
            vis[i]= 0;
            art[i]= 0;
        }
        while(cin>>u && u!= 0){
            while(cin.peek() != '\n'){
                cin>>v;
                g[u].push_back(v);
                g[v].push_back(u);
            }
        }
        
//        for(int i= 1; i<= n; i++){
//            int len= g[i].size();
//            cout<< i <<"-> ";
//            for(int j= 0; j<len; j++){
//                cout<< g[i][j]<<" ";
//            }
//            NL
//        }
        
        for(int i= 1; i<= n; i++){
            if(!vis[i]){
                root= i;
                rchilds= 0;
                dfs(i);
                if(rchilds > 1) art[root]= 1;
            }
        }
        
        
        
        int c= 0;
        for(int i= 1; i<= n; i++){
            if(art[i]) c++;
        }
        
//        DA(art, n+1);
        
        cout<< c <<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    
    return 0;
}
