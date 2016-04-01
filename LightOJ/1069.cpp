//http://www.lightoj.com/volume_showproblem.php?problem=1069

#include <cmath>
#include <cstdio> 

using namespace std;

int main(void)
{
    int T, i=1;
    int mypos, liftpos;
    int time;   //holds total time =
    
    scanf("%d", &T);
    while(i<=T)
    {
        scanf("%d %d", &mypos, &liftpos);
        time  = 4 * abs(mypos - liftpos); //lift comes to my floor
        time += 3;                      //door opens
        time += 5;                      //I enter
        time += 3;                      //door closes
        time += 4 * mypos;              //lift
        time += 3;                      //door opens
        time += 5;                      //I exit
        
        printf("Case %d: %d\n", i, time);
        i++;
    }
    return 0;
}