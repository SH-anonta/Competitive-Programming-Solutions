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
typedef vector<pint> vpint;
typedef unsigned long long ULL;  //"%llu"


short COUNT_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

//functions templates
template <typename T>void pary(T* st, T* nd){while(st<nd)cout<<*st++<<" ";NL}
template <typename T>void rary(T* st, T* nd){while(st<nd)swap(*st++,*--nd);}
template <typename T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <typename T>void tobin(T n,char*bin){int pos=1<<((8*sizeof(T)-2));while((n&pos)==0)pos>>=1;while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <typename T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
LL todec(char* bin){LL dec= 0;short i= 0, len= strlen(bin) -1;while(bin[i]){if(bin[i++]=='1'){dec += 1<<len;} len--;}return dec;}
LL tonum(char* str){LL num= *str++ - '0';while(*str){num= 10*num + (*str++ - '0');}return num;}
void tostr(LL n,char*st){char*bu=st;while(n>0&&st){*st++='0'+n%10;n/=10;}rary(bu,st);*st='\0';}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool ispal(char* str, int len){for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int& a,const int& b){return a>b;} //reverse sort


void solve(void)
{
    int T, n;
    double a,b,c,d, s; //semi per.
    double mxArea;

    read(T);
//    while(sf("%d", &n) == 1)
    for(int tst= 1; tst<=T; tst++)
    {
        sf("%lf%lf%lf%lf", &a,&b,&c,&d);
        s= (a+b+c+d)/2;

//        DD(s)

        mxArea= sqrt((s-a) *(s-b) *(s-c) *(s-d));



        pf("%.2f\n", mxArea);
    }

}



int main(void)
{
    solve();
    return 0;

}




