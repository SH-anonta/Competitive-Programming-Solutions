//#Name: Anonta Haque #Problm: UVA 406 - Prime Cuts
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
const int SZ= 1500;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


bool stat[SZ+10];
int primes[251];


void sieve();

void solve(void)
{
    int n, c;
    int len, nd, start;
    while(sf("%d%d", &n, &c) == 2)
    {
        len= 0;
//        cout<<"Primes: ";
        while(primes[len]<= n){
//            cout<<primes[len]<< " ";
            len++;
        }
//        NL
        
        pf("%d %d: ", n, c);
        if(2*c>=len)
        {
            start= 0;
            nd= len;
        }
        else{
            //because we are counting 1 as prime add 1
            len++;
            start= len/2 -c;
            nd= len/2 + c -((len%2==0)? 1: 0);
        }

        pf("%d", primes[start++]);
        for(int i= start; i<nd ; i++)
        {
            pf(" %d", primes[i]);
        }
        NL
        NL
    }
    
}



int main(void)
{
    sieve();
    solve();
    
    
    return 0;
}



void sieve()
{
    int sqrtN= sqrt((double)SZ);
    
    for(int i=3; i<= sqrtN; i+=2)
    {
        if(stat[i] == 0){
            for(int j= i*i; j<= SZ; j+= i<<1)
            {
                stat[j]= 1;
            }
            
        }
    }
    
    primes[0]= 1;
    primes[1]= 2;
    for(int i= 3, j= 2; i<=SZ; i+= 2)
    {
        if(stat[i] == 0)
        {
            primes[j]= i;
//            cout<< primes[j] << " ";
            j++;
        }
    }
    
}