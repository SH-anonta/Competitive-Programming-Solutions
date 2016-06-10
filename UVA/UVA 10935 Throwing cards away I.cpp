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
#define dcc (double)
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);



void solve(void)
{
    int Tc;
    int n;
    
    deque<int> stash;
    
    while(cin>>n)
    {
        stash.clear();
        if(n == 0) break;
        else if(n == 1){
            cout<< "Discarded cards:\nRemaining card: 1\n";
            continue;
        }
        
        
        for(int i= 1; i<= n; i++){
            stash.push_front(i);
        }
        
        cout<< "Discarded cards: "<< stash.back();
        
        stash.pop_back();
        stash.push_front(stash.back());
        stash.pop_back();
        
        while(stash.size() > 2){
            cout<< ", " << stash.back();
            stash.pop_back();
            stash.push_front(stash.back());
            stash.pop_back();
        }
        
        if(n>2){
            cout<< ", " << stash.back();
        }
        cout<< "\nRemaining card: " << stash.front() <<"\n";
        
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}