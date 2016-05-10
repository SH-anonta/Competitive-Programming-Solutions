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

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

//functions templates
template <typename T>void rary(T* st, T* nd){while(st<nd)swap(*st++,*--nd);}
template <typename T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<'\n';}
template <typename T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <typename T>void tobin(T n,char*bin){int pos=1<<((8*sizeof(T)-2));while((n&pos)==0)pos>>=1;while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <typename T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
LL todec(char* bin){LL dec= 0;short i= 0, len= strlen(bin) -1;while(bin[i]){if(bin[i++]=='1'){dec += 1<<len;} len--;}return dec;}
LL tonum(char* str){LL num= *str++ - '0';while(*str){num= 10*num + (*str++ - '0');}return num;}
void tostr(LL n,char*st){char*bu=st;while(n>0&&st){*st++='0'+n%10;n/=10;}rary(bu,st);*st='\0';}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool ispal(char* str, int len){for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int& a,const int& b){return a>b;} //reverse sort

int sumDigits(int num){
    int sum= 0;
    if(num < 10) return num;
    else{
        while(num){
            sum += num%10;
            num /= 10;
        }
        return sumDigits(sum);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    string a, b;
    int sa, sb;
    double ratio;
    
//    int n= 11;
    while(getline(cin, a)){
    
    
    getline(cin, b);
    
    sa= 0;
    sb= 0;
    
    
    
    int la= a.size();
    int lb= b.size();
    
    
    for(int i= 0; i<la; i++){
        if(isalpha(a[i])){
            sa += tolower(a[i]) - 'a' + 1;
        }
    }
    
    for(int i= 0; i<lb; i++){
        if(isalpha(b[i])){
            sb += tolower(b[i]) - 'a' + 1;
        }
    }
    
    sa = sumDigits(sa);
    sb = sumDigits(sb);
    
    
    ratio = (double)(100*sb)/sa;
    
    if(ratio > 100.0) ratio = (double) (100*sa)/sb;
    
    if(ratio>=0 && ratio<=100){
        pf("%.2f %\n",ratio );
    }
    else pf("\n");
    
    }
    
    return 0;
}



