#include <iostream>

using namespace std;

int a[105];

int main(void)
{
    int n; 
    cin>>n;
    
    double fr= 0, per= (double)100/n;
    int m= n, temp;
    
    while(m--){
        cin>>temp;
        
        fr+= double(per*temp/100);
    }
    
    cout.precision(12);
    cout<<fixed;
    cout<< fr <<endl;
    
    return 0;
}