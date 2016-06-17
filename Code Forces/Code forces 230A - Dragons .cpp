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

bool comp(const pair<int, int>& a,const pair<int, int>& b){return a.first<b.first;}


void solve(void)
{
    int Tc;
    int n, s;
    
    cin>>s>>n;
    
    pair<int, int>* drag = new pair<int, int>[n];
    
    for(int i= 0; i<n; i++){
        cin>> drag[i].first>>drag[i].second;
    }
    
    sort(drag, drag+n, comp);
    
    bool victory= true;
    for(int i= 0; i<n; i++){
        if(s <= drag[i].first){
            victory = false;
            break;
        }
        s+= drag[i].second;
    }
    
//    for(int i= 0; i<n; i++){
//        cout<< drag[i].first<<" " << drag[i].second<<endl;
//    }
    
    
    cout<< ((victory)? "YES" : "NO")<<endl;
    
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
