//#Name: Anonta Haque #Problm:
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

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef unsigned long long ULL;

//debug
short CC_;
#define sf scanf
#define pf printf
#define PP getchar();
#define NL cout<<"\n";
#define pqueue priority_queue
#define testb(x_, i_) ((x_&1<<i_)!=0)
#define setb(x_, i_) (x_=(x_|(1<<i_)))
#define clrb(x_, i_) (x_=(x_&(!(1<<i_))))
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const LL SZ= 70000;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;


int primes[70000];
bool stat[SZ+100];

int divisors(LL n){
    int sqrtN= sqrt(n);
    int divc= 1, power;
    for(int i= 0; primes[i]<=sqrtN; i++){
        if(n % primes[i] == 0){
            power= 0;
            while(n % primes[i] == 0){
                power++;
                n /= primes[i];
            }
            sqrtN= sqrt(n);
            divc *= power+1;
        }
    }
    
    if(n != 1) divc *= 2;
    
    return divc;
}

void sieve(){
    int sqrtN = sqrt(SZ);
    
    for(int i= 3; i<=sqrtN; i+= 2){
        if(stat[i] != 1){
            for(int j= i*i; j<=SZ; j += i<<1){
                stat[j]= 1;
            }
        }
    }
    primes[0]= 2;
    for(int i= 3, j= 1; i<=SZ; i+= 2){
        if(stat[i] != 1){
            primes[j]= i;
            j++;
        }
    }
}

void solve(void){
    LL n;
    
    while(cin>>n && n != 0)
    {
//        DD(divisors(n))
        cout<< ((divisors(n) & 1)? "yes" : "no") <<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    solve();
    
    
    return 0;
}
