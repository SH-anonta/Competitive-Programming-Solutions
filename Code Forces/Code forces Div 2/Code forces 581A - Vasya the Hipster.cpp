#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin>>a>>b;
    
    if(a > b) swap(a, b);
    
    cout<< a<<" "<< (b-a)/2 <<endl;
    
    
    return 0;
}