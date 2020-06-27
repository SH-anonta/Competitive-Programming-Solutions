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

//FOLD ME!!!
namespace{
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef stringstream strstream;
typedef unsigned long long ULL;

//Macros
LL CC_;
#define sf scanf
#define pf printf
#define PP getchar();
#define NL cout<<"\n";
#define pqueue priority_queue
#define testb(x_, i_) ((x_&1<<i_)!=0)
#define setb(x_, i_) (x_=(x_|(1<<i_)))
#define clrb(x_, i_) (x_=(x_&(!(1<<i_))))
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;
}

void solve(void){
    int n, mx= 0, c= 0;
    bool inpar= false;
    string s;
    
    cin>>n>>s;
    
    stringstream inp, outp;
    stringstream ss(s);
    
    string temp1, temp2;
    while(getline(ss, temp1, '(') && getline(ss,temp2, ')')){
        outp<<"_"<<temp1;
        inp<<"_"<<temp2;
    }
    
    ss>>temp1;
    
    outp<<"_"<<temp1;
    while(getline(outp, temp1, '_')){
        if(mx < temp1.size()) mx= temp1.size();
    }

    while(getline(inp, temp1, '_')){
        if(temp1 != "")c++;
    }
    
    cout<< mx << " "<< c<<endl;
    
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   

    
    return 0;
}
