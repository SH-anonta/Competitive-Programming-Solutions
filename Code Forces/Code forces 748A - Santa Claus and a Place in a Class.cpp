#include <iostream>

using namespace std;

int main(void)
{
    int n, m, k;
    
    cin>>n>>m>>k;
    
    int skipby= 2*m, i, j;
    i= j= 0;
    
    while(!(i < k && i+skipby+1 > k)){
        i += skipby;
    }
    
    j+= i;
    while(j<k){
        j+= 2;
    }
    
    j-= i;
    
    cout<< i/skipby +1<<" ";
    cout<< j/2 <<" ";
    cout<< ((k&1)? "L" : "R")<<endl;
    return 0;
}