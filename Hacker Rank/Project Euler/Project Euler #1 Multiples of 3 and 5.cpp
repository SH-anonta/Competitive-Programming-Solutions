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
    int Tc;
    
    LL n, m5, m3, m15, tempn;
 
    cin>>Tc;
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>n;

        tempn= int((n-1)/3);
        m3 = (tempn * (2 * 3+ ((tempn - 1)* 3)))/2;

        tempn= int((n-1)/5);
        m5 = (tempn * (2 * 5 + ((tempn - 1)* 5)))/2;

        tempn= int((n-1)/15);
        m15 = (tempn * (2 * 15 + ((tempn - 1)* 15)))/2;

        cout<< m3+m5-m15 <<endl;
    }
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   
    
    return 0;
}



