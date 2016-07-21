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
#include <set>
#include <map>

using namespace std;

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


void solve(void){
    int Tc;
    int mx;
    string ss;
    
    cin>>Tc;
    cin.ignore();
    
    map <char, int> mm;
    for(int Case= 1; Case<=Tc; Case++){
        mx= -1;
        mm.clear();
        getline(cin, ss);
        
        char temp= 0;
        for(int i= 0; ss[i]; i++){
            if(ss[i] == ' ') continue;
            temp = tolower(ss[i]);
            mm[temp]++;
            if(mx < mm[temp]) mx = mm[temp];
        }
        
        
//        DD(mx)
        for(pair<char, int> i : mm){
            if(i.second == mx) cout<< i.first;
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
