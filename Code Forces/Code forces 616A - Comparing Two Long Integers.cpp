//#Name: Anonta Haque #Problm: Code forces 616A - Comparing Two Long Integers 
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
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

char n1[SZ+10];
char n2[SZ+10];

void solve(void)
{
    int trim1= 0,trim2= 0;
    
    sf("%s%s", n1,n2);
    
    while(n1[trim1++] == '0');
    trim1--;
    
    while(n2[trim2++] == '0');
    trim2--;
 
    int len1= strlen(n1+trim1);
    int len2= strlen(n2+trim2);
    
    
    if(len1 == 0 && len2 == 0){
        pf("=\n");
        return;
    }
    
            
        
    if(len1 > len2)
        pf(">\n");
    else if(len1 < len2)
        pf("<\n");
    else
    {
        for(int i= 0; i<len1; i++)
        {
//            DD(n1[trim1+i])
//            DD(n2[trim2+i])
            if(n1[trim1+i] > n2[trim2+i]){
                pf(">\n");
                break;
            }
            else if(n1[trim1+i] < n2[trim2+i]){
                pf("<\n");
                break;
            }
            
            if(i == len1-1)
                pf("=\n");
        }
        
        
        
    }
}



int main(void)
{
    solve();
    return 0;
    
}



