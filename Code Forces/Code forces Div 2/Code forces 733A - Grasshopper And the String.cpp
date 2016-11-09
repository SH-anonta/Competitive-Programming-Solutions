//#Name: Sofen Haque Anonta  #Problm:
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>

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

bool voul(char c){
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}


void solve(void){
    string s;
    int len, f= -1, l= -1;
    cin>>s;
    
    len = s.size();
    
   
    for(int i= 0; i<len; i++){
        if(voul(s[i])){
            f= i;
            break;
        }
    }
    
    for(int i= len-1; i>= 0; i--){
        if(voul(s[i])){
            l= i;
            break;
        }
    }
    
//    DD(len)
//    DD(f)
//    DD(l)
            
    int mx= max(f+1, len-l) , cur= 0;
    for(int i= f; i<=l; i++){
        if(voul(s[i])){
//            DD(i<<" "<<s[i])
                    
            if(mx< cur) mx= cur;
            cur= 0;
        }
        
        cur++;
    }
    
    cout<< mx  <<endl;
    
}


/*INPUTS!!!


*/


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
