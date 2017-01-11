#include <iostream>

using namespace std;

int main(void)
{
    int n, cp, mp, m, c;
    cin>>n;
    
    mp= cp= 0;
    while(n--){
        cin>>m>>c;
        if(m > c)mp++;
        else if(m < c)cp++;
    }
    
    if(mp > cp) cout<< "Mishka" <<endl;
    else if(mp < cp) cout<< "Chris" <<endl;
    else cout<< "Friendship is magic!^^" <<endl;
    return 0;
}