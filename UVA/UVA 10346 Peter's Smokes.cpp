#include <iostream>

using namespace std;

int main(void)
{
    long long n, k,c, but;
    
    while(cin>>n>>k){
        c= 0;
        while(1){
            c+= n- n%k;
            
            n= (n/k) + (n%k);
            
            if(n < k){
                c+= n;
                break;
            }
//            cout<< c <<endl;
        }
        
        cout<< c <<endl;
    }
    return 0;
}