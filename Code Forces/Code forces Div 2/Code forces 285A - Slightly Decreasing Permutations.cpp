#include <iostream>

using namespace std;

int main(){
    int n,k;

    cin>>n>>k;

    for(int i= k+1; i<= n; i++){
        cout<< i <<" ";
    }

    k++;
    while(--k){
        cout<< k <<" ";
    }

    cout<<endl;

    return 0;
}