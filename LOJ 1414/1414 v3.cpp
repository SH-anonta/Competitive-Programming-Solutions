//http://www.lightoj.com/volume_showproblem.php?problem=1414

#include <cstdio>

using namespace std;

struct date
{
    unsigned int day;
    unsigned int year;
    char month[2];
};

inline bool isLeap(const unsigned int y)
{    
   return ( ((y%4==0)&&(y%100!=0))||(y%400==0));
}

bool hasLeap(const date &dte) //checks if the date has a leap date in it
{
        if(( (dte.month[0]== 'J' && dte.month[1]== 'a') || dte.month[0]== 'F') && isLeap(dte.year))
        {
            return true;
        }
        else return false;            
}

int main(void)
{
    int T;
    int leapdates;
    date d1, d2;
    scanf("%d", &T);
    
    for(int testno=1; testno<=T; testno++)
    {
        leapdates= 0;
        scanf("%s %d, %d", &d1.month, &d1.day, &d1.year);
        scanf("%s %d, %d", &d2.month, &d2.day, &d2.year);

        if( hasLeap(d1)) leapdates++;
        if( hasLeap(d2)) leapdates++;
        
        unsigned int try_year= d1.year;//+1;
        while(++try_year< d2.year && !isLeap(try_year))
         
        while(try_year<d2.year)
        {
            try_year +=4;
            leapdates++;
        }
        
        printf("Case %d: %d\n", testno, leapdates);
    }
    
    return 0;
}