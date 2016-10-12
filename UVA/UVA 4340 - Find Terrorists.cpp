//#Name: Sofen Haque Anonta  #Problm:
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <set>
#include <map>

using namespace std;

//FOLD ME!!!
namespace{
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef stringstream strstream;
typedef unsigned long long ULL;

//Macros
LL CC_;
#define sf scanf
#define pf printf
#define PP getchar();
#define NL cout<<"\n";
#define pqueue priority_queue
#define testb(x_, i_) ((x_&1<<i_)!=0)
#define setb(x_, i_) (x_=(x_|(1<<i_)))
#define clrb(x_, i_) (x_=(x_&(!(1<<i_))))
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
template <class T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>void tobin(T n,char*bin){int pos= 1<<((int)log2(n));while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <class T>int strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != string::npos){p = s.find(tgt, p+1);oc++;}return oc;}
template <class T>LL factorial(T n){LL f= n;while(--n){f*= n;}return f;}
template <class T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0])? 'A'-10: '0');for(int i=1;num[i];i++){if(num[i]>='A'&& num[i]<='Z')num[i]-='A'-10;else num[i]-='0';dec*= b;dec+= num[i];}return dec;}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e/2,m)%m;return(temp*temp)%m;}else return((b%m)*(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool comp(const int a,const int b){return a>b;}
}

bool stat[10004];
int primes[10004];
int primesC= 0;

void sieve(){
    int sqrtn= sqrt(10000);
    
    for(int i= 3; i<=sqrtn; i+= 2){
        if(i == 1) continue;
        for(int j= i*i; j<=10000; j+= i<<1){
            stat[j]= 1;
        }
        
    }
    
    primes[0]= 2;
    
    for(int i= 3, j= 1; i<=10000; i+= 2){
        if(stat[i]==0){
            primes[j]= i;
            j++;
            primesC++;
        }
    }
    
}

bool isprime(int n){
    return binary_search(primes, primes+primesC, n);
}

void solve(void){
    int Tc;
    int n, a,b, fac,c;
    int ary[10000];
    
    cin>>Tc;
    cin.ignore();
    bool non;
    for(int Case= 1; Case<=Tc; Case++)
    {
        c=0;
        non = true;
        fac= 2;
        
        cin>>a>>b;
        if(a>b)swap(a,b);
        for(int i= a; i<=b; i++){
            fac= 2;
            if(i < 2) continue;
            for(int j= 2; j<=i/2; j++){
                if(i % j == 0){
                    fac++;
                }
            }
            
//            DD(fac)
            if(isprime(fac)){
                non= false;
//                if(i != b || b-a == 1)cout<< i <<" .";
                ary[c]= i;
                c++;
            }
            
        }
        
        if(non)cout<< -1 <<endl;
        else{
            cout<< ary[0];
            for(int i= 1; i<c; i++){
                cout<< " "<< ary[i];
            }
            cout<<endl;
        }
    }

}


/*FILL ME WITH INPUTS!!!


*/


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    solve();
    
//    DA(primes, primesC);
//    while(1){
//        int a;
//        cin>>a;
//    cout<< isprime(a)<<endl;
//    }
    return 0;
}
