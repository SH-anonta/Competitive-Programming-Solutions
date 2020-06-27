#include <iostream>

using namespace std;

int main(void)
{
    
    int n, m, r;
    
    cin>>n>>m;
    
    int lim= 100;
    
    while(lim --){
        r= n%m;
        if(r == 0){
            cout<< "Yes" <<endl;
            return 0;
        }
        n+= r;
    }
    
    cout<< "No"<<endl;
    return 0;
}