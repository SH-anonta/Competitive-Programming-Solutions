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
#include <deque>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

//function templates
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<'\n';}
template <class T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>void tobin(T n,char*bin){int pos= 1<<((int)log2(n));while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <class T>int strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != string::npos){p = s.find(tgt, p+1);oc++;}return oc;}
LL todec(string& num, int b){LL dec= num[0] - (isupper(num[0])? 'A'-10: '0');for(int i=1;num[i];i++){if(num[i]>='A'&& num[i]<='Z')num[i]-='A'-10;else num[i]-='0';dec*= b;dec+= num[i];}return dec;}
template <class T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e/2,m)%m;return(temp*temp)%m;}else return((b%m)*(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool ispal(const string& str){int len= str.length();for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int& a,const int& b){return a>b;}

int compo[SZ];
bool stat[SZ];

int compoCount= 0;
void sieve(){
    int sq = sqrt(SZ);
    for(int i= 3; i<=sq; i+= 2){
        if(stat[i] == 0){
            for(int j= i*i; j<=SZ; j+= i<<1){
                stat[j]= 1;
            }
        }
    }
    
//    compo[0]= 1;
    compo[0]= 4;
    compo[1]= 6;
    compo[2]= 8;
    
    for(int i= 9, j= 3; i<=SZ; i+=2){
        if(stat[i] == 1){
            compo[j]= i;
            compo[j+1]= i+1;
            compoCount+=2;
            j+=2;
        }
    }
}

void solve(void)
{
    int n;
    
    cin>>n;
//    compoCount -= 10000000;
    int i= 0;
    while(! binary_search(compo, compo+n, n-compo[i])){
        i++;
    }
    
    cout<< n-compo[i] << " " << compo[i] <<endl;
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    solve();

//    DA(compo, 10);
    
    
    
    return 0;
}
