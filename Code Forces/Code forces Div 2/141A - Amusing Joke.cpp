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
#include <list>
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
LL CC_;
#define sf scanf
#define pf printf
#define PP getchar();
#define NL cout<<endl;
#define pqueue priority_queue
#define testb(x_, i_) ((x_&1<<i_)!=0)
#define setb(x_, i_) (x_=(x_|(1<<i_)))
#define clrb(x_, i_) (x_=(x_&(!(1<<i_))))
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define DM(MT,n_,m_)pf("Matrix %s:\n", #MT);for(int r_=0;r_<n_;r_++){for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;
}

void solve(void){
    static int n, occ[27], occ2[27];
    string a,s,d;
    
    cin>>a>>s>>d;
    
    for(int i= 0; a[i]; i++){
        occ[a[i]-'A']++;
    }
    
    for(int i= 0; s[i]; i++){
        occ[s[i]-'A']++;
    }
    
    for(int i= 0; d[i]; i++){
        occ2[d[i]-'A']++;
    }
    
    for(int i= 0; i<26; i++){
        if(occ[i] != occ2[i]){
            cout<< "NO"<<endl;
            return;
        }
    }
    
    
    cout<< "YES"<<endl;
}


/*INPUTS!!!


*/


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   
    return 0;
}
