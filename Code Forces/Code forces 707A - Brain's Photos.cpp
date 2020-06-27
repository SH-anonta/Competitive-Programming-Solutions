#include <iostream>
#include <cmath>


using namespace std;
char g[102][102];
int occ[27];

int main(void)
{
    int n, m;
    
    cin>>n>>m;
    
    for(int i= 0; i<n; i++){
        cin.ignore();
        for(int j= 0; j<m; j++){
            cin>>g[i][j];
        }
    }
    
    
    for(int i= 0; i<n; i++){
        for(int j= 0; j<m; j++){
            occ[g[i][j] - 'A']++;
        }
    }
    
    bool yes= true;
    for(char i= 'A'; i<'Z'; i++){
        if(i != 'B' && i != 'W' &&  i != 'G' &&  occ[i-'A'] != 0){
            yes= 0;
            break;
        }
    }
    
    cout<< ((yes) ? "#Black&White" : "#Color") <<endl;
    
    return 0;
}