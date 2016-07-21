//#Name: Anonta Haque #Problm:UVA 11152 - Colourful Flowers

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
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


void solve(void)
{
    double a,b,c;

    while(sf("%lf%lf%lf", &a, &b, &c) == 3)
    {

        double vioA= (a+b+c)/2;
        double s= vioA;
        
        double vioArea= sqrt(s*(s-a) * (s-b) * (s-c));
        
        double sunRad= (a*b*c)/(4*sqrt(s*(s-a) * (s-b) * (s-c)) );

        double sunArea= PI*sunRad*sunRad;


        double roseRad= sqrt(s*(s-a) * (s-b) * (s-c))/s;

        double roseArea= PI*roseRad*roseRad;

        sunArea -= vioArea;
        vioArea -= roseArea;        
                

        pf("%.4f %.4f %.4f\n", sunArea + EPS, vioArea+EPS, roseArea+EPS);                

    }
}



int main(void)
{
    solve();

    
    return 0;
}



