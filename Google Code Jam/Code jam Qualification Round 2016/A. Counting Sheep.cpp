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

void solve(void)
{
    ofstream fout;
    fout.open("output.txt");
    
    int Tc;
    LL n, last;
    bool found;
    cin>>Tc;
    
//    bool digits[10];
    map<int, bool> digits;
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        found= false;
        cin>>n;
        if(n == 0){
//          cout<< "Case #"<< Case << ": INSOMNIA" <<endl;        
            fout<< "Case #"<< Case << ": INSOMNIA" <<endl;        
            continue;
        }
        digits.clear();
        for(int i= 1; i; i++){
            LL temp= i*n;
            while(temp){
                digits[temp%10]= true;
                
                if(digits.size()== 10){
                    last = i*n;
                    found= true;
                    break;
                }
                temp/= 10;
            }
            
            if(found) break;
        }
        
        
//        pf("Case #%d: %d\n", Case, last);
        fout<< "Case #"<< Case << ": " << last <<endl;        
    }
    
    fout.close();
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();


    return 0;
}
