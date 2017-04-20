#include <iostream>

using namespace std;


int main(void){
    int n,t;
    cin>>t;
    
    while(t--){
        cin>>n;
        cout<< ((n&1)? 9 : 1) <<endl;
    }
    
    
    
    return 0;
}