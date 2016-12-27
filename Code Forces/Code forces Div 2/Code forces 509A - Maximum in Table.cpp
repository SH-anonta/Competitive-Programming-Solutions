#include <iostream>

using namespace std;

int g[11][11];

int main(void)
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) g[1][i]= 1;
    
    for(int i= 2; i<= n; i++){
        for(int j= 1; j<= n; j++){
            g[i][j]= g[i-1][j]+g[i][j-1];
        }
        
    }
    
    cout<< g[n][n] <<endl;
        
    return 0;
}