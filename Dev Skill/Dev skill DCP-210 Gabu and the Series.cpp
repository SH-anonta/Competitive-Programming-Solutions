#include <iostream>

using namespace std;


int main(void){
    int n,t;
    cin>>t;
    
    while(t--){
        cin>>n;
        
        if(n == 1) cout<< 0 <<endl;
        else cout<< (long long) (n-1)*(n-1)*2 <<endl;
    }
    
    
    
    return 0;
}