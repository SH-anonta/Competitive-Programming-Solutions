#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n){
    if(n == 2) return true;
    if(n % 2 == 0 || n == 1) return false;
    int sqn= sqrt(n);
    
    for(int i= 3; i<= sqn; i+= 2){
        if(n % i== 0) return false;
    }
    
    return true;
}

int main(void)
{
    int n, a, b;
    
    cin>> n;
    
    if(isprime(n)){
        cout<< 1 << " " << n <<endl;
    }
    else{
        a= sqrt(n)+1;
        
        while(a > 0 && n%a != 0){
            a--;
        }
        
        b= n/a;
        if(a > b) swap(a, b);
        cout<< a << " "<< b <<endl;
    }
    
    return 0;
}