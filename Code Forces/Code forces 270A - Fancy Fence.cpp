#include <iostream>

using namespace std;

int main(void)
{
    int n, q;
    
    cin>>q;
    while(q--){
        cin>>n;
        cout<< ((360%(180-n) ==0)? "YES" : "NO" )<<endl;
    }
    
    return 0;
}