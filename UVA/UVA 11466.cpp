//#Name: Anonta Haque #Problm: uva 11466

#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>

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
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;


const int SZ= 1e7;
const int pSZ= 1e6;

bool stat[SZ+10];
LL primes[pSZ];

//sieve of eratosthene, stores prime numbers up to 10E7 in array
void sieve()
{
    int sqrtN= sqrt((double) SZ);

    for(LL i= 3, j; i<=sqrtN; i+= 2)
    {
        if(stat[i] == 0){
            for(j= i*i; j<=SZ; j+= i<<1)
            {
                stat[j]= 1;
            }
        }

    }

    primes[0]= 2;
    for(LL i= 3, j= 1; i<SZ; i+=2){
        if(stat[i] == 0){
            primes[j++]= i;
//            pf("%d ", primes[j]);
        }
    }

}


void solve(void)
{
    int T;
    LL n, sqrN;
    LL mx;       //stores maximum prime devisors
    int primecc; //no. of factors
    while(sf("%lld", &n) && n != 0)
    {        
        n = (LL) abs(n);
        sqrN= sqrt((double)n);
        mx = 0;
        primecc= 0; //no. of factors
        
        //prime factorizing, and counting factors
        for(LL i= 0; primes[i]<= sqrN; i++)
        {
            if(n % primes[i] == 0){
                primecc++;
                mx= primes[i];
                while(n % primes[i] == 0){
//                    DD(primes[i])
                    n /= primes[i];
                }
                
                sqrN = sqrt((double)n);
            }
        }

        if(n != 1){            
            mx= n;
            primecc++;
        }
        
        //if prime divisors count more then or equal to 2
        if(primecc >= 2){
            pf("%lld\n", mx);
        }
        else pf("-1\n");
    }

}



int main(void)
{
    sieve();
    solve();


    return 0;
}




