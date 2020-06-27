#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int a[2006];
int np[2006];
map<int,int> mp;

int main(void)
{
    int n;
    cin>>n;
    for(int i= 0; i<n; i++){
        cin>>a[i];
    }
    
    int cc;
    for(int i= 0; i<n; i++){
        cc =0 ;
        for(int j= 0; j<n; j++){
            if(a[i] < a[j])cc++;
        }
        np[i]= cc+1;
    }
    
    for(int i= 0; i<n; i++){
        cout<< np[i] << " ";
    }
    cout<<endl;
    return 0;
}