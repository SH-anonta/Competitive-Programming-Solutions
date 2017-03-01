#include <iostream>

using namespace std;

int main(void)
{
    int n, t, s;
    
    while(cin>>n && n!= 0){
        s= 0;
        while(n--){
            cin>>t;
            s ^= t;
        }
        
        cout<< ((s != 0)? "Yes" : "No") <<endl;
    }
    
        
    return 0;
}