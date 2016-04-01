#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
const int sz= 2*1e4;

bool pos[sz+10];

void name(void)
{
    long long  T;
    scanf("%lld", &T);
    
    long long pp;
    long long  gr= 0;
        
    bool flag= 0;
    
    for(int tst= 1; tst<=T; tst++)
    {
        scanf("%lld", &pp);
        
        pos[pp]= 1;
        
        //if there is no one on the left or right position
        if(pos[pp+1]==0 && pos[pp-1]==0)
        {
            gr++;
        }
        //if there are people in both the left or right position
        else if (pos[pp+1]==1 && pos[pp-1]==1 && gr != 1)
        {
            gr--;
        }
       
        printf("%lld\n", gr);
    }
        printf("Justice\n");
    
}


int main(void)
{
    name();
    return 0;
}