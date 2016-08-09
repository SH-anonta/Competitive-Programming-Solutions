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
typedef map<int,int> mint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define fs first
#define sd second
#define pf printf
#define PP getchar();
#define NL cout<<"\n";
#define itr iterator
#define pqueue priority_queue
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

namespace{
template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
template <class T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>void tobin(T n,char*bin){int pos= 1<<((int)log2(n));while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <class T>int strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != string::npos){p = s.find(tgt, p+1);oc++;}return oc;}
template <class T>LL factorial(T n){LL f= n;while(--n){f*= n;}return f;}
template <class T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0])? 'A'-10: '0');for(int i=1;num[i];i++){if(num[i]>='A'&& num[i]<='Z')num[i]-='A'-10;else num[i]-='0';dec*= b;dec+= num[i];}return dec;}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e/2,m)%m;return(temp*temp)%m;}else return((b%m)*(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool ispal(const string& str){int len= str.length();for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int& a,const int& b){return a>b;}
}

void solve(void){
    int Tc;
    int temp, b, sb, sg, bb, gg;
    
    cin>>Tc;
    cin.ignore();
    multiset<int> green, blue;
    deque<int> bf, gf;
    
//    while(cin>>n)
    for(int Case= 1; Case<=Tc; Case++)
    {
        bf.clear();
        gf.clear();
        green.clear();
        blue.clear();
        
        cin>>b>>sg>>sb;
        
        for(int i= 0; i<sg; i++){
            cin>>temp;
            green.insert(temp);
        }
        for(int i= 0; i<sb; i++){
            cin>>temp;
            blue.insert(temp);
        }
        
        while(!green.empty() && !blue.empty()){
            for(int i= 0; i<b; i++){
                if(!blue.empty()){
                    bf.push_back(* --blue.end());
                    blue.erase(--blue.end());
                }

                if(!green.empty()){
                    gf.push_back(* --green.end());
                    green.erase(--green.end());
                }
                
                //choosing a victor in ith battle ground
                bb= bf.front();
                gg= gf.front();
                if(bb > gg){
                    bf.pop_front();
                    gf.pop_front();
                    blue.insert(bb-gg);
                }
                else if(gg > bb){
                    bf.pop_front();
                    gf.pop_front();
                    green.insert(gg-bb);
                }
                else{   //when both die in a match
                    if(!bf.empty()) bf.pop_front();
                    if(!gf.empty()) gf.pop_front();
                }
                
                if(green.empty() || blue.empty()){
                    while(!bf.empty()){
                        blue.insert(bf.front());
                    }
                    while(!gf.empty()){
                        green.insert(bf.front());
                    }
                    break;
                }
            }
        }
        
        multiset<int>::reverse_iterator vic, ed;
        if(green.empty() && blue.empty()){
            cout<< "green and blue died"<<"\n";
        }
        else if(green.empty()){
            cout<< "blue wins"<<"\n";
            vic= blue.rbegin();
            ed= blue.rend();
            
            while(vic != ed){
                cout<< *vic <<"\n";
                vic++;
            }
        }
        else{
            cout<< "green wins"<<"\n";
            vic= green.rbegin();
            ed= green.rend();
            
            while(vic != ed){
                cout<< *vic <<"\n";
                vic++;
            }
        }
        
        if(Case != Tc)cout<<endl;
//        cout<<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    
    

    return 0;
}
