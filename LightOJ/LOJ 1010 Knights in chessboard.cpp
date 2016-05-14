#include <iostream>
#include <cstdio>
#include <cmath>
#include <fstream>

using namespace std;


void solve(){
    int m,n, t, knights;
    
    ofstream op;
    ifstream ip;
    
    cin>>t;
    for(int tst= 1; tst<=t; tst++){
        cin>>m>>n;
        
        int mn = (m*n);
        
        if(m == 1 || n == 1){
            knights = mn;
        }
        else if(m == 2 || n == 2){
            int mx= max(m,n);
            int temp = mx%4;
            
            if(temp != 0){
                mx += ((temp&1)? 1 : 2);
            }
           
            knights= mx;
        }
        else if(mn %2 == 0){
            knights = mn/2;
        }
        else{//when mn is odd
            knights = (mn/2)+1;
        }
        
        printf("Case %d: %d\n", tst, knights);
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}