#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdarg>
#include <algorithm>

using namespace std;

#define pf printf
#define sf scanf
#define arySZ(a) sizeof(a)/sizeof(a[0])  //(array must be in scope)
#define DD(x) cout<< ">> " << #x << ": " << x <<endl;
#define SS cout<< ">_<LOOOOOK@MEEEEEEEEEEEEEEEEEEEE" <<endl;
#define NL pf("\n");
//#define FLUSH

typedef long L;                 //"%ld"
typedef long long LL;           //"%lld"
typedef long double ld;         //"%f"
typedef unsigned int ui;        // "%u"
typedef unsigned long  ul;      //"%lu"
typedef unsigned long long ULL; //"%llu"

//constants
const int SZ= 1e6;
const double PI = 2*acos(0.0);
const int INF=  (1<<29);

//functions template

char str[SZ+10];

char alp[27];

void solve(void)
{
    int T, r, len;
    char dump, a, b;
    scanf("%d", &T);
//    while(sf("%d ", & ) == 1)
    for(int tst= 1; tst<=T; tst++)
    {
        sf("%s", str);
        len= strlen(str);
        sf("%d", &r);


        strcpy(alp,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
        while(r--)
        {
            sf("%c", &dump);
            sf("%c %c", &a, &b);

            for(int i= 0; i<27; i++){
                if(alp[i] == b) alp[i]= a;
            }
        }

        for(int i= 0; i<len; i++){
            if(str[i]!='_') pf("%c", alp[str[i]-'A']);
                else pf("_");
        }
        NL
    }

}



int main(void)
{
    solve();

    return 0;
}
