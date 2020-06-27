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
    int n;
    cin>>n;
    
    map<string,int> db;
    map<string, int>::iterator i;
    string temp;
    
    while(n--){
        cin>>temp;
        i = db.find(temp);
        if(i == db.end()){
            db[temp]= 0;
            cout<< "OK\n";
//            cout<< "OK"<<endl;
        }
        else{
            i->second++;
            cout<< i->first << i->second <<"\n";
        }
        
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    
    return 0;
}
