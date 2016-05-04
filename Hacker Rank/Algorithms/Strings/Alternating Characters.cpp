#include <iostream>

using namespace std;

int main(void)
{
    int t, cc, len;
    string s;
    
    cin>>t;
    while(t--){
        cc= 0;
        cin>>s;
        len = s.size();
        
        for(int i= 0; i+1<len; i++){
            if(s[i] == s[i+1]) cc++;
        }
        cout<<cc<<"\n";
    }
    
    return 0;
}