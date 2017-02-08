#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string a, b;
    
    cin>>a>>b;
    
    int l= a.size(), ll= b.size();
    
    if(l != ll){
        cout<< max(l, ll) <<endl;
    }
    else if(a == b){
        cout<< -1 <<endl;
    }
    else{
        cout<< a.size() <<endl;
    }
    return 0;
}