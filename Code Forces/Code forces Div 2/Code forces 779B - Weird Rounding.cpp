#include <iostream>
#include <string>

using namespace std;


int main(void)
{
    int z, k;
    string s;
    cin>>s>>k;
    
    int t= k, c= 0;

    for(int i= s.size()-1; i>= 0; i--){
        if(s[i] == '0'){
            t--;
        }
        else{
            c++;
        }
        
        if(t == 0) break;
    }
    
    
    if(t > 0) cout<< s.size() -1 <<endl;
    else cout<< c++ <<endl;
    
    return 0;
}