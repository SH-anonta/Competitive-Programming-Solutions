#include <iostream>

using namespace std;

int main(void)
{
    int a,s,d;
    
    cin>>a>>s>>d;
    
    cout<< min(min(2*(a+s),2*(a+d)), min(a+s+d,2*(d+s))) <<endl;
    return 0;
}