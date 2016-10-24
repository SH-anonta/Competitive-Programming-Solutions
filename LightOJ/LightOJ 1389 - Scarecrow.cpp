#Name Sofen Haque Anonta  #Problm
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
 
FOLD ME!!!
namespace{
typedef long long LL;
typedef vectorint vint;
typedef pairint,int pint;
typedef mapint,int mapii;
typedef mapint,bool mapib;
typedef stringstream strstream;
typedef unsigned long long ULL;
 
Macros
int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL coutendl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout #x_n;DA(x_.begin(), x_.end());
#define DD(x_) cout( ++CC_ ) #x_ x_endl;
#define SS printf(_LOOOOOK@MEEEEEEEEEEEEEEE( %d )n,++CC_);
#define EXT(st_) coutnExicution Time (double)(clock()-st_)CLOCKS_PER_SECendl;
#define DM(MT,n_,m_)pf(Matrix %sn   , #MT);for(int i_= 0;i_m_;i_++)pf(%4d , i_);NL;NL;for(int r_=0;r_n_;r_++){pf(%2d , r_);for(int c_= 0;c_m_;c_++)pf(%4d , MT[r_][c_]);NL}
 
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
template class Tinline T LCM(T x,T y){return((xy)__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0]) 'A'-10 '0');for(int i=1;num[i];i++){if(num[i]='A'&& num[i]='Z')num[i]-='A'-10;else num[i]-='0';dec= b;dec+= num[i];}return dec;}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e2,m)%m;return(temptemp)%m;}else return((b%m)(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp--0){p = base;} return p;}
 
}
 
pairint, int a[500005];
bool comp(pint a, pint b){
    return a.firstb.first;
}
 
void solve(void){
    int Tc;
    int n, c, mx;
 
    cinTc;
 
    multisetint endt;
    for(int Case= 1; Case=Tc; Case++)
    {
        c= mx= 0;
        endt.clear();
        cinn;
 
 
        for(int i= 0; in; i++){
            cina[i].firsta[i].second;
        }
        sort(a, a+n, comp);
 
        for(int i= 0; in; i++){
            for(setintiterator j= endt.begin(); j != endt.end(); j++){
                if(j  a[i].first){
                    c--;
                    endt.erase(j);
                }
                else break;
            }
 
            c++;
            endt.insert(a[i].second);
            if(c  mx ) mx= c;
 
        }
 
        coutCase   Case    mx n;
    }
 
}
 
 
INPUTS!!!
 
 

 
 
int main(void){
    ios_basesync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
 
 
    return 0;
}