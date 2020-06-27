#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d, e,f, n;
    
    cin>>a>>b>>c>>d>>e>>f;
    cin>>n;
    
    int cup= a+b+c;
    int med= d+e+f;
    
    n-= cup/5;
    n-= med/10;
    if(cup < 5 && cup != 0) n--;
    if(med < 10 && med != 0) n--;
    if(cup > 5 && cup % 5 > 0)
        n--;
    if(med > 10 && med % 10 > 0)
        n--;
    
    cout<<  ((n<0)? "NO" : "YES") <<endl;
    return 0;
}