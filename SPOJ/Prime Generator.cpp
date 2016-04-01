//#Name: Anonta Haque #Problm:  SPOJ prime generator
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
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;


//constants
//const LL SZ= 1E9;

//bool stat[SZ+10];
//LL primes[SZ];

bool isprime(LL num)
{
    LL numsqr= sqrt((double)num);
    if(num == 2) return true;
    if(num == 1) return false;
    if(num % 2 == 0) return false;
    for(int i= 3; i<= numsqr; i+=2)
    {
        if(num % i == 0) return false;
    }
    
    return true;
}

//sieve of eratosthenes
//void sieve(LL ST, LL ND)
//{
//    LL sqrtN= sqrt((double) ND);
//    
//    for(LL i= 3, j; i<= sqrtN; i+= 2)
//    {
//        if(stat[i] == 0){
//            for(j= i*i; j<= ND; j+= i<<1)
//            {
//                stat[j]= 1;
//            }
//            
//        }
//        
//    }
//    
//    int pcount= 1;
//    for(LL i= 3; i<= ND; i+=2)
//    {
//        if(stat[i] == 0)
//        {
////            pf("%lld ", i);
//            pcount++;
//        }
//    }
//    cout<< "count "<< pcount <<endl;
//}

void solve(void)
{
    int T;
    LL st, nd;
    
    read(T);
    for(int tst= 1; tst<=T; tst++)
    {
        sf("%lld%lld", &st,&nd);
        
        if(st != 2 && st%2 == 0) st++;
        else if(st == 2) {pf("2 "); st++;}
        else if(st == 1) {pf("2 "); st= 3;}
        while(st<=nd)
        {            
            if(isprime(st))
            {
                pf("%lld ", st);
            }
            st += 2;
        }
        NL
    }
    
}


int main(void)
{
    solve();
    
    return 0;
}



