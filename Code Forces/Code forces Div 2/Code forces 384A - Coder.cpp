#include <iostream>

using namespace std;

int main(void)
{
    int n; 
    long long c;
    cin>>n;
    
    c= n*n/2;
    if(n&1) c++;
    
    cout<< c <<endl;
    
    bool f;
    for(int i= 1; i<=n; i++){
        f= (i % 2 != 0);
        
        for(int j= 0; j<n; j++){
            if(f) cout<< 'C';
            else cout<< '.';
            f=!f;
        }
        cout<<endl;
    }
    return 0;
}