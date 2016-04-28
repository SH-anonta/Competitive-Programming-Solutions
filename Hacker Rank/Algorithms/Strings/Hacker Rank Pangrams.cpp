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
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long LL;            //"%lld"
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;  //"%llu"

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

char str[1010];
bool check[29]; //check alphabets

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    gets(str);
    
    for(int i= 0; str[i]; i++)
    {
        if(isalpha(str[i])){
            check[tolower(str[i]) - 'a'] = 1;
        }
    }
    
    for(int i= 0; i<26; i++){
        if(check[i] == 0){
            cout<<"not pangram\n";
            return 0;
        }
    }
    
    cout<<"pangram\n";
    
    return 0;
}



