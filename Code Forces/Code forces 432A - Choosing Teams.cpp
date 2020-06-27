#include <iostream>
#include <algorithm>

using namespace std;

int a[2006];

int main(void)
{
    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    int c= 0;
    for(int i= 2; i<n; i+= 3){
        if(5-a[i] < k) break;
        c++;
    }
    
    cout<< c <<endl;
    
    return 0;
}