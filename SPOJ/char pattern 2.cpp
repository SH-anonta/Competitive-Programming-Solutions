//http://www.spoj.com/problems/CPTTRN2/

#include <iostream>
#include <cstdio>
#include <cstring> 

using namespace std;

int main(void)
{
    char st[210];
    int t, row, col;
    int len= 0;
    bool stat= true;
    
    scanf("%d", &t);       
    while(t--)
    {
        scanf("%d %d", &row, &col);
        
        for(int i= 0; i<row; i++)
        {
            for(int k= 0; k<col; k++)
            {                
                if(row>2 && col>2)
                {
                if((i==0 || i==row-1) || (k==0 || k==col-1)) 
                    printf("*");
                else
                    printf(".");
                }
                else
                    printf("*");
            }
            puts("");
        }
            puts("");
    }
    
    return 0;
}