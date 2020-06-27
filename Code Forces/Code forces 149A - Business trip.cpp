#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int a, int b){return a>b;}
int a[13];
int main(void)
{
    int k;
    cin>>k;
    for(int i= 0; i<12; i++){
        cin>>a[i];
    }
    
    sort(a, a+12, comp);
    
    int mm= 0, cc= 0;
    
    if(k !=0)
    for(int i= 0; i<12; i++){
        mm+= a[i];
        cc++;
        if(mm >= k) break;
    }
    
    if(k>mm)cout<< -1<<endl;
    else cout<< cc <<endl;
    return 0;
}