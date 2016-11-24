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

int Len;
void turn(string& s){
    char ch= s[0];
    s.erase(0, 0);
    s.push_back(ch);
}

void solve(){
    int T, Case= 1;
    char ch;
    int n, len;
    string s, mn;
    cin>>T;

    while(T--){
        cin>>s;
        mn= s;
        Len= len = s.size();

        for(int i= 0; i<len; i++){
            ch= s[0];
            s.erase(0, 1);
            s.push_back(ch);

            if(mn >= s) mn= s;
        }

        cout<< "Case " << Case++ << ": "<< mn << "\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);

    solve();

    return 0;
}
