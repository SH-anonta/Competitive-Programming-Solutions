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

int dp[1003][1003];

void solve(void){
    int n,  al, bl;;
    string a,b;
    
    while(1){
        getline(cin,a);
        getline(cin,b);
        
        if(a == "") break;
        al= a.size();
        bl= b.size();
        
        for(int i= 0; i<al; i++) dp[0][i]= 0;
        for(int i= 0; i<bl; i++) dp[i][0]= 0;
        
        for(int i= 1; i<=al; i++){
            for(int j= 1; j<=bl; j++){
                if(a[i-1] == b[j-1]) dp[i][j]= dp[i-1][j-1]+1;
                else dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        cout<< dp[al][bl] <<endl;
                
    }
    
}


/*INPUTS!!!


*/


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
