#include <iostream>
#include <cmath>
using namespace std;

int jossef(int n, int k){
    if(n == 1) return 1;

    return ((jossef(n -1,k)+k-1)% n) + 1;
}

int main(){

    int n, k, t;

    cin>>t;
    for(int i=1; i<=t; i++){
    cin>>n>>k;
    cout<< "Case " << i <<": "<< jossef(n, k) <<"\n";

    }
    return 0;
}
