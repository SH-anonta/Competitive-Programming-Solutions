#include <iostream>

using namespace std;


int gcd(int a, int b){
    if( b%a == 0) return a;
    else  return gcd(b%a, a);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int t;
    cin>>t;

    int a,b, c, g,l;

    while(t--){
        cin>>g>>l;

        c= g*l;
        bool notfound= true;

        if(l%g != 0){
            cout<<"-1\n";
        }
        else{
            cout<< g << " "<< l <<"\n";
        }

    }

    return 0;
}
