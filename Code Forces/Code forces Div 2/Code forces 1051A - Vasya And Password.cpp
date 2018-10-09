// Author: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <cstdio>
#include <climits>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <string>

//using namespace std;

using namespace std;

namespace {
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL cout<<endl;

template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);

const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

}



void solve(){

    int t;
    string s;

    cin>>t;
    while(t--){

        cin>>s;

        int n = s.size();

        int ups = 0;
        int downs = 0;
        int digits = 0;

        for(int i= 0; i<n; i++){
            char ch = s[i];
            if(ch >= '0' && ch <= '9'){
                digits++;
            }
            else if(ch >= 'A' && ch <= 'Z'){
                ups++;
            }
            else if(ch >= 'a' && ch <= 'z'){
                downs++;
            }
        }

        if(!digits){
            for(int i= 0; i<n; i++){
                char ch = s[i];
                if(ch >= 'A' && ch <= 'Z' && ups > 1 || ch >= 'a' && ch <= 'z' && downs > 1){
                    s[i]= '0';
                    break;
                }
            }
        }

        if(!ups){
            for(int i= 0; i<n; i++){
                char ch = s[i];
                if(ch >= '0' && ch <= '9' && digits > 1 || ch >= 'a' && ch <= 'z' && downs > 1){
                    s[i]= 'A';
                    break;
                }
            }
        }

        if(!downs){
            for(int i= 0; i<n; i++){
                char ch = s[i];
                if(ch >= '0' && ch <= '9' && digits > 1 || ch >= 'A' && ch <= 'Z' && ups > 1){
                    s[i]= 'a';
                    break;
                }
            }
        }

        cout<< s <<endl;
    }
}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

    solve();


    return 0;
}
