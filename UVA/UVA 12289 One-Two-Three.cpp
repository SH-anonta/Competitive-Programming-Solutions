//#Name: Anonta Haque #Problm:  
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
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

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

bool find(const string& str, const char* target){
    int len = str.size();
    for(int i= 0; i<len-2; i++){
        if(str[i] == target[0] && str[i+2] == target[2]){
            return true;
            break;
        }
    }
    return false;
}

void solve(void)
{
    int Tc;
    string str;
    
    cin>>Tc;
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>str;
        
        if(str.find("one") != string::npos
         || str.find("ne") != string::npos 
          || str.find("on") != string::npos
           || find(str, "one")){
            cout<< 1 <<endl;
        }
        else if(str.find("two") != string::npos
         || str.find("wo") != string::npos 
          || str.find("tw") != string::npos
           || find(str, "two")){
            cout<< 2 <<endl;
        }
        else{
            cout<< 3 <<endl;
        }
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
