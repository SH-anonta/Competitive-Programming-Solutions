//#Name: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <utility>
#include <string>

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
    string line;

    bool inside= false;
    while(getline(cin, line)){
        int len = line.size();
        string line_out;
        for(int i=0; i<len; i++){

            if(line[i] == '"'){
                if(inside == true){
//                    cout<<"''";
                    line_out.push_back('\'');
                    line_out.push_back('\'');
                    inside = false;
                }
                else{
                    inside = true;
//                    cout<<"``";
                    line_out.push_back('\`');
                    line_out.push_back('\`');
                }
            }
            else{
//                cout<<line[i];
                line_out.push_back(line[i]);
            }
        }

        cout<< line_out <<endl;
    }
}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);
    solve();

    return 0;
}
