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

//functions templates
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<'\n';}
template <class T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>void tobin(T n,char*bin){int pos= 1<<((int)log2(n));while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <class T>int strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != string::npos){p = s.find(tgt, p+1);oc++;}return oc;}
template <class T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e/2,m)%m;return(temp*temp)%m;}else return((b%m)*(bigMod(b,e-1,m))%m)%m;}
LL todec(char* bin){LL dec= 0;short i= 0, len= strlen(bin) -1;while(bin[i]){if(bin[i++]=='1'){dec += 1<<len;} len--;}return dec;}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool ispal(const string& str){int len= str.length();for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int& a,const int& b){return a>b;}



LL toDec(const string& num, const int base){
//    cout<< num << ": " << base <<endl;
    int temp;
    LL res = 0;
    LL p = 0;
    
    for(int i= num.size() - 1; i>= 0; i--){
        if(num[i] >= '0' && num[i]<= '9') temp = num[i] - '0';
        else temp = (int) num[i] - 'A' + 10;
        
        res += pow(base, p)*temp;
        p++;
        
    }
    
    return res;
}

int minBase(const string& num){
    int mx= 0, temp;
    
    if(num == "0") return 2;
    for(int i= num.size() - 1; i>= 0; i--){
        if(num[i]>= '0' && num[i] <= '9'){
            temp = num[i] - '0';
        }
        else temp = num[i] - 'A' + 10;
        
        if(temp > mx) mx = temp;
    }
    
    return mx+1;
}

void solve(void)
{
    int baseA, baseB;
    string a, b;
    bool found;
    
    while(cin>>a>>b)
    {
        
        
        found = false;
        
        for(baseA= minBase(a); baseA<37; baseA++){
            for(baseB= minBase(b); baseB<37; baseB++){
                if(toDec(a, baseA) == toDec(b, baseB)){
                    found = true;
                    break;
                }
            }
            
            if(found){
                break;
            }
        }
        
        if(found){
            pf("%s (base %d) = %s (base %d)\n", a.c_str(), baseA, b.c_str(), baseB);
        }
        else{
            pf("%s is not equal to %s in any base 2..36\n", a.c_str(), b.c_str());
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
