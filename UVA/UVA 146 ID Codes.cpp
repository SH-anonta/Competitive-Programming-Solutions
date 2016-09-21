#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
    char s[54];
    int len;
    
    while(cin>>s && strcmp(s,"#")){
        len= strlen(s);
        if(next_permutation(s, s+len)) cout<< s <<endl;
        else cout<< "No Successor" <<endl;
    }
    
    return 0;
}