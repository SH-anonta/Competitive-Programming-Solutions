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

typedef long long LL;            //"%lld"
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;  //"%llu"

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<'\n';
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

void solve(void)
{
    int t;
    string s;
    cin>>t;
    
    bool fun;
    while(t--){
        fun = true;
        cin>>s;
        const int len= s.size();
        for(int i= 1; i<len; i++){
            if(abs(s[i] - s[i-1]) != abs(s[len-i] - s[len-i-1])){
                fun = false;
                break;
            }
        }
        cout<< ((fun)? "Funny" : "Not Funny")<<"\n";
        
    }
    
}



int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    

    return 0;
}



