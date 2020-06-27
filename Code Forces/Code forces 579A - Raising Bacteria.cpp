#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    
    cin>>n;
    int c= 0;
    while(n > 0){
        if(n&1){
            c++;
            n--;
        }
        else{
            n/= 2;
        }
        
    }
    
    cout<< c <<endl;
          
    return 0;
}