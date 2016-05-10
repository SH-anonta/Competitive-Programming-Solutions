#include <cstdio>
#include <iostream>

#define pf printf
#define sf scanf
#define DEBUG(x) cout<< ">> " << #x << ": " << x <<endl
#define SIG cout<< "AAAAAAAAAAAAAAAAAAAA" <<endl;


typedef long L;                 //"%ld"
typedef long long LL;           //"%lld"
typedef long double ld;         //"%f"
typedef unsigned int ui;        // "%u"
typedef unsigned long  ul;      //"%lu"
typedef unsigned long long ULL; //"%llu"


using namespace std;


void name(void)
{
    ui a, b, n, temp;
    ui aBackup, bBackup;
    int count, mx;

    while(sf("%u%u", &a, &b ) == 2)
    {
    aBackup= a;
    bBackup= b;
    
    if(a>b) swap(a, b);
    
    mx= 0;    
    while(a<=b){
        n= a;
        count= 1;
        while(n!=1){
            if(n%2 == 0){
                n= n>>1;
            }
            else{
                temp= n;
                n = n<<1;
                n += temp+1;
            }
                count++;
            }

        if(mx<count)
        {
            mx= count;
        }
        a++;
        }
    pf("%u %u %d\n", aBackup,bBackup, mx);
    }
    
}


int main(void)
{
    name(); //problem solving code
    
    //experiments go here
    return 0;
}