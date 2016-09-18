//#Name: Anonta Haque #Problm:
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

namespace{
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef stringstream strstream;
typedef unsigned long long ULL;

//Macros
short CC_;
#define sf scanf
#define pf printf
#define PP getchar();
#define NL cout<<"\n";
#define pqueue priority_queue
#define testb(x_, i_) ((x_&1<<i_)!=0)
#define setb(x_, i_) (x_=(x_|(1<<i_)))
#define clrb(x_, i_) (x_=(x_&(!(1<<i_))))
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

}

void solve(void){
    int len;
    string s;    
    
    int occur[28];
    memset(occur, 0, sizeof(int)*27);
            
    cin>>len>>s;
    
    int sum= 0;
    if(len > 26){
        cout<< -1<<endl;
        return;
    }
    
    for(int i= 0; i<len; i++){
        occur[s[i]-'a']++;
    }
    
    for(int i= 0; i<26; i++){
        if(occur[i] == 0) continue;
        sum+= occur[i]-1;
    }

    cout<< sum <<endl;
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
