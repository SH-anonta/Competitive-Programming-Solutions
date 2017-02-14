#include <cstdio>
#include <cmath>
#include <ctime>
#include <iostream>

using namespace std;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//keeps digs[n]= log2(n!)
double digs[1000005];

int main(void)
{
//    freopen("D:/input.txt", "r", stdin);
    int t, n, b, ca= 1;
    double d;
    
    scanf("%d", &t);
    
    int lim= 1000005;
    d= 0;
    
    for(int i= 1; i<=lim; i++){
        d+= (double) log2(i);
        digs[i]= d;
    }
    
    while(t--){
        scanf("%d%d", &n, &b);

        printf("Case %d: %d\n", ca++, (int) double(digs[n]/log2(b)) +1);
    }
    
//    EXT(0)
    
    
    return 0;
}