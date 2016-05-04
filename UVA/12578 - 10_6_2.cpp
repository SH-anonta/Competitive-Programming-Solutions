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
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;


const double PI= 2*acos(0.0);

void solve(void)
{
    int T, n;
    
    double len, lbyw, lbyr, r, w, carea;
    
    lbyw = (double)10/6;
//    lbyw = (double) 4.5/3;
    lbyr = 5;
    
    cin>>T;
    for(int tst= 1; tst<=T; tst++)
    {
        cin>>len;
        
        w = len/lbyw;
        r = len/lbyr;
        
        carea = PI*r*r;
        
        pf("%.2f %.2f\n", carea, len*w - carea);
    }
    
}



int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    

    return 0;
}



