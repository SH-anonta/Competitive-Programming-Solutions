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

    int dist;
    int mn= INT_MAX;
    int freq= 0;

    int town= -1;

    for(int i= 0; i<n; i++){
        cin>>dist;

        if(dist < mn){
            mn = dist;
            freq = 1;
            town= i+1;
        }
        else if(dist == mn){
            freq++;
        }
    }

    if(freq == 1){
        cout<< town <<endl;
    }
    else{

        cout<< "Still Rozdil" <<endl;
    }


    return 0;
}
