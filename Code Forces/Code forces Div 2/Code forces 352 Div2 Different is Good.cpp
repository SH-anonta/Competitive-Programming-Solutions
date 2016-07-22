//#Name: Anonta Haque #Problm:  
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int occur[27];

void solve(void)
{
    int n;
    string str;
    
    cin>>n;
    cin>>str;
    
    if(n>26){
        cout<< -1 <<endl;
        return;
    }
    
    int len= str.size();
    int change= 0;
    
    for(int i= 0; i<len; i++){
        occur[str[i]- 'a']++;
    }
    
    for(int i= 0; i<26; i++){
        if(occur[i] != 0){
            change += occur[i] -1;
        }
    }
    
    cout<< change <<endl;
    
    
}



int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}



