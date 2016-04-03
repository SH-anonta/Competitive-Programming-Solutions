//#Name: Anonta Haque #Problm:  

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <cctype>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

short COUNT_;
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

char s1[110], s2[110];

void solve(void)
{
    int len;
    while(cin>>s1>>s2)
    {
        len = strlen(s1);
        for(int i= 0; i<len; i++){
            s1[i]= tolower(s1[i]);
            s2[i]= tolower(s2[i]);            
        }
        
        cout<<strcmp(s1, s2)<<endl;
    }
    
}



int main(void)
{
    solve();       
    
    
    return 0;
}



