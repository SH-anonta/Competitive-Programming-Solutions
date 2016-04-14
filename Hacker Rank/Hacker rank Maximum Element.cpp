//#Name: Anonta Haque #Problm:  Hacker rank Maximum Element
//https://www.hackerrank.com/challenges/maximum-element

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
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



typedef long long LL;            //"%lld"
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;  //"%llu"

template <typename T>void pary(T* st, T* nd){while(st<nd)cout<<*st++<<" ";cout<<endl;}

short COUNT_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E5;

LL Stack[SZ];


int main(void)
{
    int n, q, pos= 0;
    LL mx= 1;
    
    read(n);
    
    while(n--)
    {
        read(q);
        
        if(q == 1)
        {
            sf("%lld", &Stack[pos]);
                if (mx<Stack[pos])
                    mx= Stack[pos];
            pos++;
        }
        else if(q == 2){
            pos -= 1;
            //no need to search for max again if max didn't get chopped off
            if(mx != Stack[pos]) continue;

            if(pos == 1){ mx = Stack[0]; continue;}
            
            mx= 0;
            for(int i= 0; i<pos; i++)
            {
                if(mx<Stack[i]) 
                    mx= Stack[i];
            }
        }
        else
        {
            pf("%lld\n", mx);            
        }
    }
    
    return 0;    
}



