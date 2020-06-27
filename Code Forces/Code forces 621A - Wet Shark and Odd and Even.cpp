#include <iostream>

using namespace std;

int main(void)
{
    
    long long sum= 0,n, temp, oddmn= INT_MAX;
    
    int oddc= 0;
    cin>>n;
    
    if(n == 1){
        cin>>temp;
        cout<< ((temp &1)? 0 : temp) <<endl;
        return 0;
    }
    
    while(n--){
        cin>>temp;
        if(temp&1){
            oddc++;
            oddmn = min(temp, oddmn);
        }
        sum+= temp;
        
    }

    if(oddc & 1){
        sum-= oddmn;
    }
    
    cout<< sum <<endl;
    return 0;
}