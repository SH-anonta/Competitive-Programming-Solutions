#include <iostream>

using namespace std;
typedef long long LL;
int main(void)
{
    LL tw, th, f, s;
    
    cin>>tw>>th>>f>>s;
    
    LL  mn= min(tw, min(f, s));
    
    tw-= mn;
    
    cout<< 256*mn + 32*min(tw, th) <<endl;
    
    return 0;
}