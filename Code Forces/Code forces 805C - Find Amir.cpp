//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

const int sss= 1E6;


void solve(){
    int n;
    
    cin>>n;
    
    if(n == 1){
        cout<< 0 <<endl;
        return;
    }
    
    cout<< ((n&1) ? n/2 : n/2-1) <<endl;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    return 0;
}