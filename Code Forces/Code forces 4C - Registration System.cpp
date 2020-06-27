#include <sstream>
#include <iostream>
#include <map>

using namespace std;

map<string, int> oc;

int main(void)
{
    string s;
    int n, has;
    
    cin>>n;
    
    while(n--){
        cin>>s;
        has= oc[s]++;
        
        if(has == 0)cout<< "OK" <<endl;
        else{
            stringstream ss(s);
            ss<<s;
            ss<<has;
            s= ss.str();
            oc[s]++;
            
            cout<< s <<endl;
            
        }
    }
    
    return 0;
}