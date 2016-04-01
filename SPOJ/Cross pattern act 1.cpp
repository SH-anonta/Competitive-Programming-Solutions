//#Name: Anonta Haque #Problm:  
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
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

typedef long L;                 //"%ld"
typedef long long LL;           //"%lld"
typedef long double LD;         //"%f"
typedef unsigned int UI;        // "%u"
typedef unsigned long  UL;      //"%lu"
typedef unsigned long long ULL; //"%llu"

short COUNT_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_);
#define read(x_) sf("%d", &x_);
#define readf(x_) sf("%f", &x_);
#define read2(x_,y_) sf("%d%d",&x_,&y_);
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define ALPHAB "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define ALPHAb "abcdefghijklmnopqrstuvwxyz"
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;


void solve(void)
{
    int T, m, n, ci, cj;

    scanf("%d", &T);
    for(int tst= 1; tst<=T; tst++)
    {
        sf("%d%d%d%d", &m, &n, &ci, &cj);
        
        for(int i= 0; i<m; i++)
        {
            for(int j= 0; j<n; j++)
            {
              pf("%c", (i == ci-1 || j == cj-1)? '*' : '.');
            }
            NL
        }  
        
    }
    
}


int main(void)
{
    solve();
    
    
    
    return 0;
}



