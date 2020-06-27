#include <iostream>

using namespace std;

int main(void)
{
    int n, m, l, r;
    
    cin>> n>>m;
    
    l= n- n%m;
    r= 2*l;
    
    int f= -1;
    for(int i= m; i<= n; i+= m){
        if(i<= n && 2*i >= n){
            f= i;
            break;
        }
    }
    
    cout<< f <<endl;
    
    return 0;
}