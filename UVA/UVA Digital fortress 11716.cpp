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
#include <stack>
#include <set>
#include <map>

using namespace std;



typedef long long LL;            //"%lld"
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;  //"%llu"


short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= (1E4)+10;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


char str[SZ];

void solve(void)
{
    int T, len, cut;
 
    read(T);
    getchar();
    
    for(int tst= 1; tst<=T; tst++)
    {
        gets(str);
        
        
        len= strlen(str);
        cut= sqrt(len);
                       
        if(cut*cut != len)
        {
            pf("INVALID\n");
            continue;
        }
        
        for(int i= 0, jump= cut; i<cut; i++)
        {
            for(int j= 0; j<len; j+= jump)
            {
                pf("%c", str[i+j]);
            }
        }
        NL
    }
    
}

int main(void)
{
    solve();
    
    return 0;
}
