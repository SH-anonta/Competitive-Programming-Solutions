#include <iostream>

using namespace std;

int main(void)
{
    int n, a, p, mn= INT_MAX;
    
    long long cost= 0;
    cin>>n;
    while(n--){
        cin>>a>>p;
        if(p < mn) mn= p;
        cost+= mn*a;      
    }
    
    cout<<  cost <<endl;
    
    
    return 0;
}