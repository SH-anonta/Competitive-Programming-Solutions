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
    int Tc;
    int n, k, temp;
    ULL sum;
    
    multiset<int> urn;
    multiset<int>::iterator st, nd;
    
    while(cin>>n && n!= 0)
    {
        sum= 0;
        urn.clear();
        while(n--){
            cin>>k;
            while(k--){
                cin>>temp;
                urn.insert(temp);
            }
            
            st= urn.begin();
            nd= urn.end();
            nd--;
            
            sum+= *nd - *st;
            urn.erase(st);
            urn.erase(nd);
        }
        
        cout<< sum <<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
