//#Name: Anonta Haque #Problm:  UVA 11734 Big Number of Teams will Solve This
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

typedef long long LL;            //"%lld"
typedef unsigned long long ULL;  //"%llu"

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;


char judge[50];
char team[50];

bool find()
{
    int lenj= strlen(judge);
    int lenc= strlen(team);
    
    while(judge[lenj] == ' ') lenj--;
    while(judge[lenc] == ' ') lenc--;
    
    for(int i= 0; i<lenj && i<lenc; i++)
    {
        for(int j= 0, c= 0; i+j<lenj && i+j<lenc; j++, c++)
        {
            if(team[i+c] == ' '){
                j--;
                continue;
            }
                    
            if(judge[i+j] != team[i+c])
            {
                return false;
            }
            
            if(i+c == lenc - 1) return true;
        }
    }
    
    return true;
}


void solve(void)
{
    int T, n;
    
    int lenj, lenc;
    read(T);
    getchar();
    for(int tst= 1; tst<=T; tst++)
    {
        fgets(team,21 , stdin);
        fgets(judge, 21, stdin);
        
        lenj= strlen(judge);
        lenc= strlen(team);
        
        if(!strcmp(judge,team))
        {
            pf("Case %d: Yes\n", tst);
            continue;
        }
        
        if(find()){
            pf("Case %d: Output Format Error\n", tst);
        }
        else{
            pf("Case %d: Wrong Answer\n", tst);
        }
            
    }
    
}



int main(void)
{
    solve();
    return 0;
}



