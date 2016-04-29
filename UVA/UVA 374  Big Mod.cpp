#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int bigMod(int base, int exp, int m){

    if(exp == 0) return 1;
//    if(exp == 1) return base%m;

    if(exp % 2 == 0){
        int temp= bigMod(base, exp/2, m)%m;
        return (temp*temp)%m;

//        return (bigMod(base, exp/2, m)* bigMod(base, exp/2, m))%m;
    }

    else return ( (base%m)*(bigMod(base, exp-1, m))%m )%m;
}

int main(void)
{
    int p, b, m;
    int mod;

    while(scanf("%d%d%d", &b,&p, &m) == 3){
      mod= bigMod(b,p,m);
      cout<< mod <<endl;
    }


    return 0;
}
