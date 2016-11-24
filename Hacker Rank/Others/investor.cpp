#include <bits/stdc++.h>

using namespace std;

namespace{
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> pint;
typedef vector<int> vint;

int CCC;
#define SS printf("LOOK@MEEEEEEEEEEEEEEE( %d )\n", ++CCC);
#define DD(x_) cout<< #x_ << ++CCC << ">>>>>>: "<< x_<<endl;
#define PP cin.get();
template <class T>void DA(T* a_, int n){for(int i= 0; i<n; i++){cout<< ">>array["<<i<<"]: "<< a_[i] <<endl;}}


const int SZ= 1E6;
const double PI= 2*acos(0.0);
const double EPS= 1E-9;
const LL MOD = 1000000007;

}

int a[106];
LL ac[106];
void solve(){
    int T, Case= 1;
    int n, len;
    LL mx;

    cin>>T;

    while(T--){
        cin>>n;
        for(int i= 1; i<=n; i++){
            cin>>a[i];
        }
        ac[0]= 0;
        ac[1]= a[1];
        mx= INT_MIN;

        for(int i= 1; i<=n; i++){
            ac[i]= ac[i-1]+a[i];
//            DD(ac[i])
        }

        for(int i= 1; i<=n; i++){
            for(int j= i; j<=n; j++){
                if(mx < ac[j]-ac[i-1]) mx= ac[j]-ac[i-1];
            }

        }

        cout<< mx<< "\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);

    solve();

    return 0;
}
