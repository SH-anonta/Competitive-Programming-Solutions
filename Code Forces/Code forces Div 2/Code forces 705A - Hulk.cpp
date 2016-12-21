#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    string s1= "I love", s2= "I hate";
    
    for(int i= 0; i<n; i++){
        if(i&1){
            cout<< s1<<" ";
        }
        else{
            cout<< s2<<" ";
        }
        
        if(i != n-1) cout<< "that ";
    }
    cout<< "it"<<endl;
    return 0;
}