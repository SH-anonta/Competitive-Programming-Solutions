#include <iostream>

using namespace std;

int main(void)
{
    unsigned int n, l, r, m, t;
    
    while(cin>>n>>l>>r){
        m= l;
        for(int i= 32; i>= 0; i--){
            if(!(n & 1ll<<i)){
                t= m | 1ll<<i;
                if(t <= r) m= t;
            }
        }
        
        cout<< m <<endl;
    }
    
    
    return 0;
}