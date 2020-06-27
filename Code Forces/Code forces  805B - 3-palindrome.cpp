//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

const int sss= 1E6;


void solve(){
    int n;
    
    cin>>n;
    
    string s(n, '#');
    
    
    if(n == 1){
        cout<< "a" <<endl;
        return;
    } 
    if(n == 2){
        cout<< "aa" <<endl;
        return;
    }
    
    s[0]= 'a';
    s[1]= 'a';
    
    for(int i= 2; i<n; i++){
        if(s[i-2] == 'a') s[i]= 'b';
        else s[i]= 'a';
    }
    
    cout<< s <<endl;

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    return 0;
}