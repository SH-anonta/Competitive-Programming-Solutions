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

bool stats[SZ+10];
int primes[SZ+10];

void sieve(){
    int sqrtN= sqrt((double) SZ);
    
    for(int i= 3; i<= sqrtN; i+=2){
        if(stats[i] == 0){
            for(int j= i*i; j<=SZ; j+= i<<1){
                stats[j]= 1;
            }
        }
    }
    primes[0]= 2;
    for(int i= 3, j= 1; i<=SZ; i+= 2){
        if(stats[i] == 0){
            primes[j] = i;
            j++;
        }
    }
}

int factorCount(int num){
    int cc= 0;
    int sqrtn= sqrt((double)num);
    
    for(int i= 0; primes[i] < sqrtn; i++){
        if(num%primes[i] == 0) cc++;
        while(num%primes[i] == 0){
            num/= primes[i];
        }
//        DD(primes[i])
//        sqrtn = sqrt((double) num);
    }
    
    if(num != 1) cc++;
//    DD(num)
    return cc;
}

void solve(void)
{
    int Tc;
    int n;
    
    
    while(cin>>n && n!= 0)
    {
        cout<< n <<" : "<< factorCount(n)<<endl;
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    solve();
    
//    cout<< factorCount(289384) <<endl;
//    DA(primes, 100);
    
    
    return 0;
}
