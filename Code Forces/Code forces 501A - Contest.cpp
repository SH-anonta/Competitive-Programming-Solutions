
#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    a= max(a*3/10, a- a*c/250);
    b= max(b*3/10, b- b*d/250);

    if(a > b)cout<< "Misha" <<endl;
    else if(a < b)cout<< "Vasya" <<endl;
    else cout<< "Tie" <<endl;

    return 0;
}