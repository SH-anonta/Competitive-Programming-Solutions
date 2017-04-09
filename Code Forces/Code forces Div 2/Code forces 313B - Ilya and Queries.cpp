#include <iostream>
#include <string>

using namespace std;

int dot[100005];
int hsh[100005];

int main(){
    string s;
    int m;

    cin>>s>>m;
    int len = s.size();
    for(int i= 0; s[i]; i++){
        if(s[i] == s[i+1]){
            if(s[i] == '.') dot[i+1]=1;
            else if(s[i] == '#') hsh[i+1]=1;
        }
    }

    for(int i= 1; i<=len; i++){
        dot[i]+= dot[i-1];
        hsh[i]+= hsh[i-1];
    }


//    for(int i= 0; i<=len; i++){
//        cout<< i<< ": "<< dot[i]<<endl;
//    }

    int l, r;
    while(m--){
        cin>>l>>r;

        cout<< dot[r-1]-dot[l-1] + hsh[r-1]-hsh[l-1] <<endl;
    }

    return 0;
}