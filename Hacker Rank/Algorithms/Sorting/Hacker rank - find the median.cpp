#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    const int mil= 1E6;
    static int ary[mil+10];
    
    int n; 
    cin>>n;
    
    for(int i= 0; i<n; i++){
        cin>>ary[i];
    }
    
    sort(ary, ary+n);
    
    cout<< ary[n/2]<<endl;
    
    
    return 0;
}