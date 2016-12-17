#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[1006];

int main(void)
{
    int n, l;
    cin>>n>>l;
    
    for(int i= 0; i<n; i++){
        cin>>a[i];
    }
    
    double mx= 0, temp;
    sort(a, a+n);
    
    for(int i= 1; i<n; i++){
        temp= abs(a[i]-a[i-1]);
        
        if(mx < temp) mx= temp;
    }
    
    mx = (double)mx/2;
    mx= fmax(mx, a[0]);
    mx= fmax(mx, abs(a[n-1] - l) );
    
    
    cout<<fixed;
    cout.precision(9);
    cout<< mx <<endl;
    return 0;
}