#include <iostream>

using namespace std;

int a[106];
int main(void)
{
    int n, d;
    cin>>n>>d;
    for(int i= 0; i<n; i++){
        cin>>a[i];
    }
    
    int  c= 0;
    for(int i= 0; i<n; i++){
        d-= a[i];
        if(d < 0){
            cout<< -1 <<endl;
            return 0;
        }
        
        if(i != n-1){
            d-= 10;
            c+= 2;
        }
    }
    
    c+= d/5;
    
    cout<< c <<endl;
    
    return 0;
}