//http://www.lightoj.com/volume_showproblem.php?problem=1107
#include <cstdio>

using namespace std;

void moo()
{
    int T;
    scanf("%d", &T);
    
    for(int tst_case= 1; tst_case <= T; tst_case++)
    {
        int x1,y1,x2,y2; //coordinates of field
        int M;          //number of cows
        int cx,cy;      //coordinates of cows
        printf("Case %d:\n", tst_case);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &M);
        
        while(M--)
        {
            scanf("%d %d", &cx, &cy);
            if((cx>=x1 && cx<=x2) && (cy>=y1 && cy<=y2))
                printf("%s","Yes\n");
            else
                printf("%s","No\n");
        }
    }
}

int main(void)
{
    moo();
    return 0;
}