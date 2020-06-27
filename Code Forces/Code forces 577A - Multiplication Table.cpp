#include <iostream>

using namespace std;

int main(void)
{
    int n, x;
    
    cin>>n>>x;
    int c= 0;
    if(x <= n) c++;
    
    for(int i= 2; i<= n; i++){
        if(x%i == 0 && x/i <= n){
            c++;
        }
    }
    
    cout<< c <<endl;
    
    return 0;
}