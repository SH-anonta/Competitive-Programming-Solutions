//http://www.lightoj.com/volume_showproblem.php?problem=1414

#include <cstdio>

using namespace std;

struct date
{
    unsigned int day;
    unsigned int year;
    char month[2];
};


inline bool isLeap(unsigned int y)
{
    return ( ((y%4==0)&&(y%100!=0))||(y%400==0) ); //return true if leap year
}

inline bool hasLeap(date &dte) //checks if the date has a leap date in it
{
    if(isLeap(dte.year))
    {
        return ( (dte.month[0]== 'J' && dte.month[1]== 'a') || dte.month[0]== 'F');
    }
    else return false;
}

int main(void)
{
    int T;
    date d1, d2;
    scanf("%d", &T);
    
    for(int i=1; i<=T; i++)
    {
        int leapdates= 0;
        scanf("%s %d, %d", &d1.month, &d1.day, &d1.year);
        scanf("%s %d, %d", &d2.month, &d2.day, &d2.year);
        
        if(d1.year == d2.year)
        {
            if(hasLeap(d1)) leapdates++;
        }
        else
        {
            if( hasLeap(d1)) leapdates++;
            if( hasLeap(d2)) leapdates++;

            while(++d1.year < d2.year)
            {
                if(isLeap(d1.year)) break;
            }
                
            while(d1.year < d2.year)
            {
                if(isLeap(d1.year)) leapdates++;
                d1.year += 4;
            }
        }
        
        printf("Case %d: %d\n", i, leapdates);
    }
    
    return 0;
}