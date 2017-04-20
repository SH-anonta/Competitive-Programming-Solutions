#include <iostream>

using namespace std;

bool hasr(string& s){
    for(int i= 0; s[i]; i++){
        if(s[i] == 'r') return true;
    }
    
    return false;
}

int main(void)
{
    string s;
    int t;
    
    cin>>t;
    
    while(t--){
        cin>>s;
        cout<< ((hasr(s))? "Not vely easy" : "Vely easy" ) <<endl;
    }
    return 0;
}