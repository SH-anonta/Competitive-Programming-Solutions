#include <iostream>

using namespace std;

int a[150005];

int main(void)
{
    int n, k;
    cin>>n>>k;
    
    a[0]= 0;
    for(int i= 1; i<=n; i++){
        cin>>a[i];
    }
    
    for(int i= 1; i<=n; i++){
        a[i]+= a[i-1];
    }
    
    int mn= INT_MAX, mni, s;
    for(int i = 1; i<=n-k+1; i++){
        s= a[i+k-1] - a[i-1];
        if(mn > s){
            mn= s;
            mni= i;
        }
    }
    
    cout<< mni <<endl;
//    for(int i= 1; i<=n; i++){
//        cout<< a[i] <<" ";
//    }
//    cout<<endl;
    
    return 0;
}