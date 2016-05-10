#include <iostream>

using namespace std;

int main(void)
{
    int n,k, butt, cigs;
    
    while(cin>>n>>k)
    {
        cigs= n;
        while(n >= k){
            butt = n%k;
            
            n /= k;
            cigs += n;
            
            n += butt;
        }
        
        cout<< cigs <<endl;
    }
    
    return 0;
}