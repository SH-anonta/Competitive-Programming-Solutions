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
#define dcc (double)
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
const int psize= 8e5;
int primes[psize];

void sieve(){
    int sqrtN = sqrt(dcc SZ);
    
    for(int i= 3; i<= sqrtN; i+=2){
        if(stats[i] == 0){
            for(int j= i*i; j<= SZ; j+= i<<1){
                stats[j] = 1;
            }
        }
    }
    
    primes[0]= 2;
    for(int i= 3, j= 1; i<=SZ; i+= 2){
        if(stats[i] == 0){
            primes[j]= i;
            j++;
        }
    }
}

void solve(void)
{
    int Tc, n;
 
    cin>>Tc;
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>n;
        
        
        pf("%d\n", primes[n-1]);
    }
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    
    solve();
    
    return 0;
}
