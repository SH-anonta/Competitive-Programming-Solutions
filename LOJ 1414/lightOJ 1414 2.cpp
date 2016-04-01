//http://www.lightoj.com/volume_showproblem.php?problem=1414

#include <cstdio>

using namespace std;

struct date
{
    unsigned int day;
    unsigned int year;
    char month[2];
};

date d1, d2;

//inline bool isleap(unsigned int y)
//{    
//   return (((y%4==0)&&(y%100!=0))||(y%400==0));
//}

inline bool hasleap(date &dte) //checks if the date has a leap date in it
{
//    if(isleap(dte.year))
    if(((d1.year%4==0)&&(d1.year%100!=0))||(d1.year%400==0))
    {
        if(dte.month[0]== 'J' && dte.month[1]== 'a')
        {
            return true;
        }
        else if(dte.month[0]== 'F')
        {
            return true;
        }
        else return false;            
    }
        else return false;            
}

int main(void)
{
    int T;
    scanf("%d", &T);
    int dump;
    
    for(int i=1; i<=T; i++)
    {
        int leapdates= 0;
        scanf("%s %d, %d", &d1.month, &d1.day, &d1.year);
        scanf("%s %d, %d", &d2.month, &d2.day, &d2.year);
        
        if( hasleap(d1)) leapdates++;
        if( hasleap(d2)) leapdates++;
        
        while(++d1.year < d2.year)
        {
//            if(isleap(d1.year)) leapdates++;
            if(((d1.year%4==0)&&(d1.year%100!=0))||(d1.year%400==0))
            {
                leapdates++;
            }
        }
        
        printf("Case %d: %d\n", i, leapdates);
    }
    
    return 0;
}