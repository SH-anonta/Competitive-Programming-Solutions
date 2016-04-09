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

typedef long L;                  //"%ld"
typedef long long LL;            //"%lld"
typedef long double LD;          //"%lf"
typedef unsigned int UI;         // "%u"
typedef unsigned long  UL;       //"%lu"
typedef unsigned long long ULL;  //"%llu"


short COUNT_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define read2(x_,y_) sf("%d%d",&x_,&y_)
#define LOOP(x_) for(int ix= 0; ix<x_; ix++)
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


const int sz= 1e5;
char n1[sz+10];
char n2[sz+10];


void solve(void)
{
    int T, len1, len2, len;

    read(T);

//    while(sf("%d", &n) == 1)
    for(int tst= 1; tst<=T; tst++)
    {
        sf("%s%s", n1, n2);
        len1= strlen(n1);
        len2= strlen(n2);

        len = min(len1, len2);


        if(len1 >len2){
            for(int i= len2- 1; i>=0; i--)
            {
                n1[i] += n2[i] - '0';

            }


            pf("%s\n", n1);
        }
        else
            for(int i= len1-1; i>=0; i--)
            {
                n2[i] += n1[i] - '0';
            }

            pf("%s\n", n2);
    }
}

int main(){
    solve();
    return 0;
}