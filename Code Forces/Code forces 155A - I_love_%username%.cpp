#include <iostream>

using namespace std;

int main(void)
{
    int n, temp;
    int mx, mn, c= 0;
    
    cin>>n;
    
    cin>>mx;
    mn= mx;
    
    n--;
    while(n--){
        cin>>temp;
        if(temp > mx){
            mx= temp;
            c++;
        }
        else if(temp < mn){
            c++;
            mn= temp;
        }
    }
    
    cout<< c <<endl;
    
    return 0;
}