http://www.lightoj.com/volume_showproblem.php?problem=1387

#include <iostream>
#include <cstdio>


using namespace std;

void setu()
{
    int T;
    scanf("%d", &T);
    
    for(int i= 1; i<=T; i++)
    {
        int N= 0;
        long account= 0, donate;
        char msg[6];
        
        printf("Case %d:\n", i);
        scanf("%d", &N);
        while(N--)
        {
            cin>>msg;
            if(msg[0]== 'd')
            {
                scanf("%d", &donate);
                account += donate;
            }
            else
            {
                printf("%d\n", account);
            }
        }
        
    }
}

int main(void)
{
    setu();
    return 0;
}