#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int ca, m, a, r, g, ii, t;
    string s;
    cin>>ca;
    
    while(ca--){
        m= a= r= g= ii= t= 0;
        cin>>s;
        
        for(int i= 0; s[i]; i++){
            if(s[i] == 'M') m++;
            else if(s[i] == 'A') a++;
            else if(s[i] == 'R') r++;
            else if(s[i] == 'G') g++;
            else if(s[i] == 'I') ii++;
            else if(s[i] == 'T') t++;
        }
        
        cout << min(min(m, t), min(min(a/3, r/2), min(g, ii))) <<endl;
    }
    
    return 0;
}