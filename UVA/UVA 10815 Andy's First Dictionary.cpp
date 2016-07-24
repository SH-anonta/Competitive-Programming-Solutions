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
#define NL cout<<"\n";
#define PP getchar();
#define pque priority_queue
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

void solve(void){
    string temp;
    set<string> dic;
    char ch;
    
    temp.clear();
    while(sf("%c", &ch) == 1){
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
            temp.push_back(tolower(ch));
        }
        else{
//            DD(temp)
//            temp.push_back('\0');
            if(temp!= "") dic.insert(temp);
            temp.clear();
        }
    }
    
    set<string>::iterator seti= dic.begin(), setie= dic.end();
    while(seti != setie){
//        SS
        cout<< *seti <<"\n";
//        pf()
        seti++;
    }
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
