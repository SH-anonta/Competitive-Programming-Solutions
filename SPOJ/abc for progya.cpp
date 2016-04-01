//#Name: Anonta Haque #Problm:  
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

typedef long L;                 //"%ld"
typedef long long LL;           //"%lld"
typedef long double LD;         //"%f"
typedef unsigned int UI;        // "%u"
typedef unsigned long  UL;      //"%lu"
typedef unsigned long long ULL; //"%llu"

short COUNT_;
#define pf printf
#define sf scanf
#define NL pf("\n");
#define put(x_) pf("%d", x_);
#define read(x_) sf("%d", &x_);
#define readf(x_) sf("%f", &x_);
#define read2(x_,y_) sf("%d%d",&x_,&y_);
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define ALPHAB "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define ALPHAb "abcdefghijklmnopqrstuvwxyz"
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
//#define FLUSH

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);



char str[1010];
char alp[30];

void solve(void)
{
    int T, n, alpc;
    int len;
    char dmp;
    scanf("%d%c", &T, &dmp);
//    while(sf("%d", &n) == 1)
    for(int tst= 1; tst<=T; tst++)
    {
        fgets(str, 1010, stdin);
        len= strlen(str);
        if(str[len-1]!='\0') str[len-1]='\0';
        
        strcpy(alp, ALPHAb);

        for(int i= 0; i<len; i++){
            alp[str[i]-'a']=' ';
        }
        
        alpc= 0;
        pf("Case %d: ", tst);
        for(int j= 25; j>=0; j--)
        {
            if(alp[j]!=' '){
                pf("%c", alp[j]);
                alpc++;
            }
        }
        if(alpc == 0) pf("Happy Typing Progya!!");
        NL
    }
    
}


int main(void)
{
    solve();
    
    
    return 0;
}



