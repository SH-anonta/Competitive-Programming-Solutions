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
#include <list>
#include <set>
#include <map>

using namespace std;

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define fs first
#define sd second
#define pf printf
#define itr iterator
#define PP getchar();
#define NL cout<<"\n";
#define pqueue priority_queue
#define test(x_, i_) ((x_&1<<i_)!=0)
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);



void solve(void){
    int n, temp;
    map<int, int> sticks;
    
    cin>>n;
    for(int i= 0; i<n; i++){
        cin>>temp;
        sticks[temp]++;
    }
    
    cout<< n <<"\n";
    
    for(pair<int,int> i : sticks){
        n -= i.second;
        if(n!=0) cout<< n <<endl;
    }
    

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   
    
    return 0;
}
