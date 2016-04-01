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
//#define FLUSH

//constants
const int SZ= 1E5;
//const int SZ= 100;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

//functions templates
template <typename T> T mnary(T*st,T*nd){T mn= *st;while(++st<nd)if(mn>*st)mn= *st;return mn;}
template <typename T> T mxary(T*st,T*nd){T mx= *st;while(++st<nd)if(mx<*st)mx= *st;return mx;}
template <typename T>void pary(T* st, T* nd){/*pf("%d", *st++);*/while(st<nd)printf("%d ", *st++);NL}
template <typename T>void rary(T* st, T* nd){while(st<nd)swap(*st++,*--nd);}
template <typename T>inline void sary(T* st, T* nd){while(st<nd) sf("%d", st++);}
template <typename T>void dec2bin(T n,char*bin){int pos=1<<((8*sizeof(T)-2));while((n&pos)==0)pos>>=1;while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <typename T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
LL str2num(char* str){int len= strlen(str)-1;LL num= 0, p= 1;while(len>=0){num+= p*(str[len--]-'0');p *= 10;}return num;}
LL bin2dec(char* bin){LL dec= 0;short i= 0, len= strlen(bin) -1;while(bin[i]){if(bin[i++]=='1'){dec += 1<<len;} len--;}return dec;}
void num2str(LL n,char*st){char*bu=st;while(n>0&&st){*st++='0'+n%10;n/=10;}rary(bu,st);*st='\0';}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool ispal(char* str, int len){for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int& a,const int& b){return a>b;} //reverse sort


int pr[8];
bool stat[SZ];
int cmpos[SZ];

void sieve()
{
    int sqn= sqrt(SZ);
    for(int i= 3; i<=sqn; i+= 2)
    {
        if(stat[i] == 0)
        {
            for(int j= i*i; j<SZ; j+= i<<1)
            {
                stat[j]= 1;
            }
        }
    }
    
    cmpos[0]= 4;
    cmpos[1]= 6;
    cmpos[2]= 8;
    for(int i= 9, j= 3; i<SZ; i+=2)
    {
        if(stat[i] == 1)
        {
            cmpos[j]= i;
//            cmpos[j+1]= i+1;
//            pf("%d ", cmpos[j]);
            j++;
        }
        cmpos[j]= i+1;
//        pf("%d ", cmpos[j]);
        j++;
    }
    
}

void solve(void)
{
    int T, n, k, count;
    bool divd;
    
    scanf("%d", &T);
    for(int tst= 1; tst<=T; tst++)
    {
        count= 0;
        sf("%d%d", &n, &k);
        sary(pr, pr+k);
        
        for(int i= 0; cmpos[i]<=n; i++)
        {
            divd= true;
            int j= 0;
            for(; j<k; j++)
            {
                if(cmpos[i]%pr[j] == 0)
                {
                    divd= false;
                    break;
                }
            }
            
//            if(j == k) count++;
            if(divd) count++;
        }
        
        
        pf("Case %d: %d\n", tst, count);
    }
    
}


int main(void)
{
    sieve();
    solve();
    
    return 0;
}



