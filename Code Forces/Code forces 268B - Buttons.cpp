#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    
    int sum= n*(n+1)/2;
//    n-= 2;
    
//    if(n>0) sum+= n*(n+1)/2;
    int j;
    for(int i= 2; i<n; i++){
        j= n-i;
        sum+= j*(j+1)/2;
    }
    
    cout<< sum <<endl;
    
    return 0;
}