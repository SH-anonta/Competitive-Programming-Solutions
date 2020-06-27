//#Name: Anonta Haque #Problm:
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <set>
#include <map>

using namespace std;

void solve(void){
    int n;
    
    cin>>n;
    
    if(n&1) {
        cout<< -1 <<endl;
        return;
    }
    else{
        for(int i= 0; i<n; i+= 2){
            cout<< i+2 <<" " << i+1 <<" ";
        }
        cout<<endl;
    }
    
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
