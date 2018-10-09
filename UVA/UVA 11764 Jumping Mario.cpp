//#Name: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <cstdio>
#include <climits>
#include <map>
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
    int t;

    cin>>t;

    int tc= 1;
    while(t--){
        int n;
        cin>>n;

        int prev_height;
        cin>>prev_height;

        int lcc= 0;
        int hcc= 0;
        int height;
        for(int i = 1; i<n; i++){
            cin>>height;

            if(prev_height < height){
                hcc++;
            }
            else if(prev_height > height){
                lcc++;
            }

            prev_height = height;
        }

        cout << "Case " << tc << ": "<< hcc << " "<< lcc <<endl;
        tc++;
    }

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);
    solve();

    return 0;
}
