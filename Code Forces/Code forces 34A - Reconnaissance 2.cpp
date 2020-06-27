// author: Sofen Hoque Anonta

#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;

    int heights[n];
    for(int i =0; i<n; i++){
        cin>>heights[i];
    }

    int a= 0,b= n-1;
    int mn= abs(heights[a]-heights[b]);

    for(int i=1; i<n; i++){
        int dist = abs(heights[i]-heights[i-1]);
        if(dist < mn){
            mn= dist;
            a= i;
            b= i-1;
        }
    }

    cout<< a+1<< " " << b+1 <<endl;
    return 0;
}
