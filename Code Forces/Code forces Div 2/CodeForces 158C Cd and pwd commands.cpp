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


void solve(void){
    int Tc;
    deque<string> dir;
//    stringstream ln;
    string cmd, temp;
    
    cin>>Tc;
    cin.ignore();
    
    dir.clear();
    for(int Case= 1; Case<=Tc; Case++)
    {
        cin>>cmd;
        
        if(cmd == "pwd"){
            cout<<"/";
            if(dir.empty()){
                cout<<endl;
                continue;
            }
            
            deque<string>::iterator i= dir.begin(), e= dir.end();
//            cout<<"/";
            while(i != e){
                cout<< *i <<"/";
//                DD(*i)
                i++;
            }
            cout<<endl;
            continue;
        }
        
        //else cmd == cd
        
        cin>>temp;
        stringstream ln(temp);
        
//        DD((int) *ln.str().end())
        if(temp == "/")dir.clear();
        else if(temp == ".."){
            if(!dir.empty()) dir.pop_back();
        }
        else{
            if(temp[0] == '/'){
                dir.clear();
                ln.seekg(1);
            }
//            DD(ln.str())
            while(getline(ln, temp, '/')){
//                DD(temp)
                if(temp == "..") if(!dir.empty()){
                    dir.pop_back();
                    continue;
                }
                dir.push_back(temp);
            }
            
        }
        
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    
    return 0;
}
