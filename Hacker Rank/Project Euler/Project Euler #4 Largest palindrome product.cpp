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

bool ispal(const char* str, int len){for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}



void solve(void)
{
    int Tc, n, x;

    cin>>Tc;
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>n;
        for(int p = n-1;  p>= 101101;p--){
            stringstream ss;
            ss<<p;
            if(ispal(ss.str().c_str(), ss.str().size())){
                for(int i= 100; i<1000; i++){
                    if(p%i == 0){
                        int temp= p / i;
                        if(temp>=100 && temp<1000){
                            cout<< p <<endl;
                            p = 0;
                            break;
                        }
                    }
                }
            }
            
            if(p == 0) break;
        }
        
    }
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
