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

//function templates
template <class T>int strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != string::npos){p = s.find(tgt, p+1);oc++;}return oc;}

inline bool byear(int n){
    stringstream ss;
    ss<<n;
    
    string yr = ss.str();
    
    int len = yr.size();
    for(int i= 0; i<len; i++){
        string ch;
        ch= yr[i];
        if(strOccur(yr, ch) >1){
            return false;
        }
    }
    
    return true;
        
}

void solve(void)
{
    int y;
    cin>>y;
    
    while(!byear(++y));
    
    cout<< y <<endl;
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();


    return 0;
}
