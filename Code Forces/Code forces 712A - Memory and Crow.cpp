#Name Anonta Haque #Problm
#include algorithm
#include iostream
#include fstream
#include sstream
#include cstring
#include cstdlib
#include cstdarg
#include utility
#include bitset
#include cctype
#include cstdio
#include vector
#include string
#include cmath
#include ctime
#include queue
#include deque
#include stack
#include list
#include set
#include map

using namespace std;

namespace{
typedef long long LL;
typedef vectorint vint;
typedef pairint,int pint;
typedef mapint,int mapii;
typedef mapint,bool mapib;
typedef stringstream strstream;
typedef unsigned long long ULL;

Macros
short CC_;
#define sf scanf
#define pf printf
#define PP getchar();
#define NL coutn;
#define pqueue priority_queue
#define testb(x_, i_) ((x_&1i_)!=0)
#define setb(x_, i_) (x_=(x_(1i_)))
#define clrb(x_, i_) (x_=(x_&(!(1i_))))
#define DC(x_) cout #x_n;DA(x_.begin(), x_.end());
#define DD(x_) cout( ++CC_ ) #x_ x_endl;
#define SS printf(_LOOOOOK@MEEEEEEEEEEEEEEE( %d )n,++CC_);
#define EXT(st_) coutnExicution Time (double)(clock()-st_)CLOCKS_PER_SECendl;

constants
const int SZ= 1E6;
const int INF= (129);
const double EPS= 1E-9;
const double PI= 2acos(0.0);
const long long MOD= 1000000007;

template class Tvoid DA(T i,T e){while(i!=e){coutCon( ++CC_ ) i++endl;}}
template class Tvoid DA(T x, int l){for(int i=0; il;i++)cout[i] x[i]endl;}
template class Tinline void sary(T st, T nd){while(stnd)cinst++;sf(%d, st++);}
template class Tvoid tobin(T n,charbin){int pos= 1((int)log2(n));while(pos=1){if((n & pos)==0)bin='0';elsebin='1';pos=1;bin++;}bin='0';}
template class Tint strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != stringnpos){p = s.find(tgt, p+1);oc++;}return oc;}
template class TLL factorial(T n){LL f= n;while(--n){f= n;}return f;}
template class Tinline T LCM(T x,T y){return((xy)__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0]) 'A'-10 '0');for(int i=1;num[i];i++){if(num[i]='A'&& num[i]='Z')num[i]-='A'-10;else num[i]-='0';dec= b;dec+= num[i];}return dec;}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e2,m)%m;return(temptemp)%m;}else return((b%m)(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp--0){p = base;} return p;}
bool ispal(const string& str){int len= str.length();for(int i= 0; ilen2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int a,const int b){return ab;}
}

int a[100000];
int b[100000];

void solve(void){
    int Tc;
    int n;
    
    cinn;
    sary(a, a+n);
    
    b[n-1]= a[n-1];
    for(int i= n-2; i=0; i--){
        b[i]= a[i]+a[i+1];
    }
    
    for(int i= 0; in; i++){
        cout b[i]  ;
    }
    
    coutendl;
}



int main(void){
    ios_basesync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}