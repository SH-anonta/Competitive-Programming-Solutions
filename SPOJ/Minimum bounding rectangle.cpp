//HS12MBR - Minimum Bounding Rectangle http://www.spoj.com/problems/HS12MBR/

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>


#define pf printf
#define sf scanf
#define arySZ(a) sizeof(a)/sizeof(a[0])  //(array must be in scope)
#define MAX(a,b) ((a>b?a:b))
#define MIN(a,b) ((a<b?a:b))
#define DEBUG(x) cout<< ">> " << #x << ": " << x <<endl
#define SIG cout<< "AAAAAAAAAAAAAAAAAAAA" <<endl;


typedef long L;                 //"%ld"
typedef long long LL;           //"%lld"
typedef long double ld;         //"%f"
typedef unsigned int ui;        // "%u"
typedef unsigned long  ul;      //"%lu"
typedef unsigned long long ull; //"%llu"


using namespace std;

template <typename T> inline void Swap(T&a, T&b){T temp= a; a= b; b= temp;}
inline LL POW(LL base, int exp){ LL p= 1; while(exp-->0){p *= base;} return p;}


//constants
const double PI = 2*acos(0.0);
const int INF=  (1<<29);

void name(void)
{
    int T, n;
    char obj;
    int x, y, r, xd, yd;
    
    scanf("%d", &T);
//    while(sf("%d ", & ) == 1)
    for(int tst= 1; tst<=T; tst++)
    {
        int maxX= -INF, maxY= -INF, minX= INF, minY= INF;
        sf("%d", &n);
        while(n--){
//            SIG
            getchar();
            scanf("%c", &obj);
            
            if(obj == 'p'){
                    scanf("%d %d", &x, &y);
                }
            else if(obj == 'c'){
                    scanf("%d %d %d", &x, &y, &r);
                    xd = x -r;
                    yd = y -r;
                    
                    x += r;
                    y += r;                                        
                    
                    maxX= max(xd, maxX);
                    minX= min(xd, minX);
                    
                    maxY= max(yd, maxY);
                    minY= min(yd, minY);
                }
            else if(obj == 'l')
                {
                    scanf("%d %d %d %d", &x, &y, &xd, &yd);
                    maxX= max(xd, maxX);
                    minX= min(xd, minX);
                    
                    maxY= max(yd, maxY);
                    minY= min(yd, minY);
                }

                maxX= max(x, maxX);
                minX= min(x, minX);
                
                maxY= max(y, maxY);
                minY= min(y, minY);
    }
        pf("%d %d %d %d\n", minX, minY, maxX, maxY);
}
}

int main(void)
{
    name(); //problem solving code
    
    //experiments go here
    return 0;
}