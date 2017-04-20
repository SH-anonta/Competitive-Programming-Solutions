#include <iostream>

using namespace std;

int main(void)
{
    int t;
    
    cin>>t;
    
    while(t--){
        int n;

        cin>>n;

        if(n == 1){
            cout<< "1 000" <<endl;
        }
        else if(n == 2){
            cout<< "2 010" <<endl;
        }
        else{
            cout<< n << " 110" <<endl;
        }
    }
          
    return 0;
}