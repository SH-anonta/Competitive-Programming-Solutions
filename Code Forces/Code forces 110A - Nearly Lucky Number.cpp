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

bool luck(const string& str){
    for(int i= 0; str[i]; i++){
        if(str[i] != '4' && str[i] != '7')
            return false;
    }
    
    return true;
}

void solve(void)
{
    string num;
    cin>>num;
    
    int cc= 0;
    for(int i= 0; num[i];i++){
        cc+= num[i] == '4' || num[i] == '7';
    }
    
    stringstream dig;
    dig<< cc;
    
    cout<< ((luck(dig.str()) )? "YES" : "NO" ) <<endl;
    
    
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();


    return 0;
}
