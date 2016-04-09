//#Name: Anonta Haque #Problm:  UVA 706 LCD Display

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long L;                  //"%ld"
typedef long long LL;            //"%lld"
typedef long double LD;          //"%lf"
typedef unsigned int UI;         // "%u"
typedef unsigned long  UL;       //"%lu"
typedef unsigned long long ULL;  //"%llu"


short COUNT_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define read2(x_,y_) sf("%d%d",&x_,&y_)
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

//9 images with 
char img[9][5][4]= {
      {"   ",
       " | ",
       "   ",
       " | ",
       "   "},
    
      {" - ",
       "  |",
       " - ",
       "|  ",
       " - "},
       
       {" - ",
        "  |",
        " - ",
        "  |",
        " - "},
       
       {"   ",
        "| |",
        " - ",
        "  |",
        "   "},
        
        {" - ",
         "|  ",
         " - ",
         "  |",
         " - "},
        
        {" - ",
         "|  ",
         " - ",
         "| |",
         " - "},         
         
         {" - ",
          "  |",
          "   ",
          "  |",
          "   "},
         
         {" - ",
          "| |",
          " - ",
          "| |",
          " - "},
          
          {" - ",
           "| |",
           " - ",
           "  |",
           " - "}
};

char str[15];

void solve(void)
{
    int T, n, rowcc, rtemp, ctemp, stemp, stemp2;
    char ch;
    
    while(sf("%d%s", &n, str) && n>0)
    {

        ctemp = n-1;
        rtemp = n-1;
        
        for(int row= 0, col; row<5; row++)
        {
            for(int i= 0; str[i]; i++)
            {
                #define SPACE " "
                //condition for handling 1 4 and 7 images
                #define IF174 (str[i]== '1' || str[i]== '4' || str[i]== '7')
                //corner case
                #define IFCORN ((row == 0 && str[i] == '7') || (row == 2 && str[i] == '4'))
                pf(SPACE); //space between each digit images
                ch = str[i];
                rtemp= n - 1;
                stemp= n-2;
                stemp2= n-2;
                for(col= 0; col<3; col++){
                                        
                    pf("%c", img[ch-'1'][row][col]);
                        
                    //for extra space for sizing print ' ' n-1 times
                    if(row%2 != 0){                        
                        while(stemp-->=0){
                        pf(SPACE);
                        }
                    }
                    else if(IF174 && !IFCORN && img[ch-'1'][row][col] == ' '){
                        while(stemp2-->=0){
                            pf(SPACE);
                        }
                    }
                    
                    //for sizing (prints the extra symbols for even rows)
                    if(img[ch-'1'][row][col] != ' ' && row%2 == 0){                        
                        while(rtemp--) pf("%c", img[ch-'1'] [row] [col]);
                    }

                }       
                
            }
            //sizing /adding extra rows
            if(row%2 != 0){
                if(ctemp-->0){
                    row--;
                    col--;
                }
                else ctemp= n-1;
            }
            NL
        }
    }
        
    
}



int main(void)
{
    solve();
    
    return 0;
}



