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
#define dcc (double)
#define PP getchar();
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

void solve(void)
{
    LL b, d, a;
    double n;
    bool has= false;
    
    cin>>a>>b>>d;
    
    n = dcc (b-a)/d;
    
    if(d > 0){
        if(b < a){
            cout<<"NO"<<endl;
            return;
        }
    }
    else if(d < 0){
         if(b > a){
            cout<<"NO"<<endl;
            return;
        }
    }
    else if(d == 0)
    {
        if(a == b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    
    has = (n - (int)n == 0);
    
    if(has)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}



