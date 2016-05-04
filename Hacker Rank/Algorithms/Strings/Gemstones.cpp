#include <iostream>
#include <string>

using namespace std;
short CC_;
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<'\n';

bool findchar(string& str, char ch){
    int len = str.size();
    for(int i= 0; i<len; i++){
        if(str[i] == ch) return true;
    }
    
    return false;
}

int main(void)
{
    int n, cc= 0;

    cin>>n;
    string str[n];
    
    for(int i= 0; i<n; i++){
        cin>>str[i];
    }
    
    for(int i= 0; i<26; i++){
        bool found = true;
        for(int j= 0; j<n; j++){
            if(!findchar(str[j], (char)i + 'a') ){
                found = false;
                break;
            }
        }
            
        if(found) cc++;
    }
    
    cout<<cc<<endl;
    
    
    return 0;
}