#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int sz= 1E6;

bool stats[sz+10];
int primes[sz+10];


void sieve()
{
    int nsqr= sqrt((double)sz);


    for(int i= 3; i<=nsqr; i+=2){
        if(stats[i]==0){
            for(int j= i*i; j<sz; j+= i<<1){
                stats[j]= 1;
            }
        }
    }

    primes[0]= 2;
    for(int i= 3, j= 1; i<=sz; i+=2){
        if(stats[i] == 0)
        {
            primes[j]= i;
            //cout<< i <<" ";
            j++;
        }
    }
}

bool isprime(int num)
{
    int nsqr= sqrt(num);

    for(int i= 0; primes[i]<=nsqr; i++)
    {
        if(num % primes[i] == 0) return false;
    }

    return true;
}

int main(void)
{
    sieve();

    int n;
    while(scanf("%d", &n) && n != 0)
    {
        for(int i= 0; 1; i++)
        {
            if(isprime(n - primes[i]))
            {
                printf("%d = %d + %d\n", n, primes[i], n-primes[i]);
                break;
            }
        }
    }

    //cout<< isprime(17) <<endl;
    return 0;
}
