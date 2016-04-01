//#Name: Anonta Haque #Problm:  SPOJ prime factorization
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
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define read2(x_,y_) sf("%d%d",&x_,&y_)
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define ALPHAB "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define ALPHAb "abcdefghijklmnopqrstuvwxyz"
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= (1E6);
const int prSZ= 8E4;



bool stat[SZ+10];
LL primes[prSZ];

void sieve()
{
    int sqrtN= sqrt((double) SZ);
    for(int i= 3, j; i<=sqrtN; i+= 2)
    {
        if(stat[i] == 0){
            for(j= i*i; j<=SZ; j+= i<<1)
            {
                stat[j]= 1;
            }
            
        }
        
    }
    
    primes[0]= 2;
    
    for(int i=3, j= 1; i<=SZ; i+=2)
    {
        if(stat[i] == 0){
            primes[j]= i;
            j++;
        }
    }
        
}

void factor(LL num)
{     
    LL sqrtNum= sqrt((double)num);
      
    for(int i= 0; primes[i] && primes[i]<=sqrtNum; i++)
    {
        if(num % primes[i] == 0)
        {
            pf("%lld\n", primes[i]);
            
            while(num % primes[i] == 0 && num > 1){
                num /= primes[i];
            }
        }
    }
    
    if(num != 1) pf("%lld\n", num);
}

void solve(void)
{
    LL num;
//    sf("%lld", &num);
    while(sf("%lld", &num) == 1){
        factor(num);
    }
}



int main(void)
{
    sieve();
    solve();       
    
    
//    factor();
    
    
    return 0;
}



