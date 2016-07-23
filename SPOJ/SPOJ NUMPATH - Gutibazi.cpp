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

int pos(int x, int y){
    int sum= 0;
    if(x == 1 && y == 1) return 1;
    if(x>1) sum+= pos(x-1, y);
    if(y>1) sum+= pos(x, y-1);
    
    return sum;
}

void solve(void){
    int Tc;
    int r, c;
    cin>>Tc;
    
    while(Tc--){
        cin>>r>>c;
        int res= pos(r, c);
    
        cout<< res <<endl;
    }
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
