#include <iostream>

using namespace std;


bool isVowel(char ch){
    return ch ==  'u' ||
            ch == 'o' ||
            ch == 'i' ||
            ch == 'e' ||
            ch == 'a';
}

int main() {
    int n;
    
    string s;
    cin>>n>>s;
    
    int cc =0;
    for(int i= 1; i<n; i++){
        if(isVowel(s[i]) && isVowel(s[i-1])){
            cc++;
        }
    }
        
    cout<< cc <<endl;
    return 0;
}