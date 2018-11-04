#include <iostream>
#include <string>

using namespace std;

int ABS(int n){
    return n < 0 ? -1*n : n;
}

int main() {
    string s;
    
    cin>>s;
    
    int r = 0;
    int c = 0;
    
    for(char ch : s){
        if(ch == 'W'){
            c--;
        }
        else if(ch == 'E'){
            c++;
        }
        else if(ch == 'S'){
            r++;
        }
        else{
            r--;
        }
    }
    
    cout<< ABS(r)+ABS(c) <<endl;
    
    return 0;
}