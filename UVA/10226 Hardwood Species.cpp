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
    int Tc, totalpop;
    string temp;
    map<string, int> trees;
    
    cin>>Tc;
    getline(cin, temp);//empty line
    getline(cin, temp);
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        trees.clear();
        totalpop = 0;
        
        
        while(getline(cin, temp)){
            if(temp == "\0") break;
            trees[temp]++;
            totalpop++;
        }
        
        
        map<string,int>::iterator i= trees.begin(), len= trees.end();

        pf("%s %.4f", (i->first).c_str(), (double) 100*i->second/totalpop);
        
        i++;
        while(i!=len){
            pf("\n%s %.4f", (i->first).c_str(), (double) 100*i->second/totalpop);
            i++;
        }
        NL
        if(Case!=Tc) NL
        
    }
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
