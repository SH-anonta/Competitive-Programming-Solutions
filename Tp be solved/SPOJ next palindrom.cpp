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
    int Tc;
    string num;
    cin>>Tc;
    cin.ignore();
    
    for(int Case= 1; Case<=Tc; Case++){
        cin>>num;
        bool niner= true;
        const int len= num.size();
        
        for(int i= len/2; i>=0; i--){
            if((num[len-i-1] != '9') || (num[i] != '9')){
                niner= false;
            }
            
            if(num[i]>num[len-i-1]){
                num[len-i-1] = num[i];
            }
            else if(num[i] < num[len-i-1]){
                num[len-i-1] = num[i]+1;
                num[i]++;
                for(int j = i+1; j<len-i-1; j++){
                    num[j] = '0';
                }
                break;
            }
        }
        
        if(num[len/2] != '9') niner= false;

        if(niner){
            cout<< '1';
            for(int i= 0; i<len-1; i++){
                cout<< '0';                
            }
            cout<< '1'<<endl;
            continue;
        }
        
        cout<< num <<endl;
        
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();


    return 0;
}
