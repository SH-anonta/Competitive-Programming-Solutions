//#Name: Anonta Haque #Problm:  
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
#define read2(x_,y_) sf("%d%d",&x_,&y_);
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define ALPHAB "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define ALPHAb "abcdefghijklmnopqrstuvwxyz"
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;

const int sz= 1e6;

LL prm[sz+100];
bool stat[sz+100];


void sieve()
{
    int sqn= sqrt(double(sz));
    
    for(int i= 3; i<=sqn; i++)
    {
        if(stat[i]==0)
        {
            for(int j= i*i; j<sz; j+= i<<1)
            {
                stat[j]= 1;
            }
        }
    }
    
    prm[0]= 2;
    for(LL i= 3, j= 1; i<sz; i+= 2)
    {
        if(stat[i] == 0){
            prm[j]= i;
            j++;
        }
    }
}

void solve()
{
    int T, n, i= 0;
    
    read(T);
    while(T--){
        i= 0;    
        read(n);
        while(n--)
        {
            pf("%lld ", prm[i]*prm[i+1]+prm[i+2]);
            i += 3;
        }
        NL
    }

}


int main(void)
{
    sieve();
    solve();
    return 0;
}



