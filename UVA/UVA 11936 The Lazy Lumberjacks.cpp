#include <iostream>

using namespace std;

int main(void)
{
    int n;
    double a, b, c;
    
    cin>> n;
    
    while(n--){
        cin>>a>>b>>c;
        
        if(a+b <= c || b+c <= a || a+c <= b)
            cout<< "Wrong!!"<<endl;
        else
            cout<< "OK"<<endl;
    }
    return 0;
}