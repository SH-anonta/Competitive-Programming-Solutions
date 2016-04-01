//http://www.spoj.com/problems/CPTTRN1/

#include <iostream>
#include <cstdio>
#include <cstring> 

using namespace std;

int main(void)
{
    char st[210];
    int t, c, l;
    int len= 0;
    bool stat= true;
    
    scanf("%d", &t);       
    while(t--)
    {
        scanf("%d %d", &c, &l);
        
        for(int i= 0; i<c; i++)
        {
//            for(int j= 0; j<l; j++)
//            {                
                    for(int k= 0; k<l; k++)
                    {
                        if(k%2==0) 
                            printf("%c", (i%2==0)? '*' : '.');
                        else
                            printf("%c", (i%2==0)? '.' : '*');
                    }
                        
//            }
            puts("");
        }
            puts("");
    }
    
    return 0;
}