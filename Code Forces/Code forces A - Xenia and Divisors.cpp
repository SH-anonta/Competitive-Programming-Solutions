// Author: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <cstdio>
#include <climits>
#include <map>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>

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
    int n, a;

    vector<int> freq(8);
    cin>>n;
    for(int i= 0; i<n; i++){
        cin>>a;
        freq[a]++;
    }

    int k = n/3;

    int ans[k][3];

    bool fail = false;

    if(freq[1] < n/3){
        cout<< -1<<endl;
        return;
    }

    for(int r = 0; r<k; r++){
        ans[r][0] = 1;



        if(freq[2] != 0){
            ans[r][1] = 2;
            freq[2]--;
        }
        else if(freq[3] != 0){
            ans[r][1] = 3;
            freq[3]--;
        }
        else{
            fail = true;
            break;
        }

        if(ans[r][1] == 2 && freq[4] != 0){
            ans[r][2] = 4;
            freq[4]--;
        }
        else if(ans[r][1] == 2 && freq[6] != 0){
            ans[r][2] = 6;
            freq[6]--;
        }
        else if(ans[r][1] == 3 && freq[6] != 0){
            ans[r][2] = 6;
            freq[6]--;
        }
        else{
            fail = true;
            break;
        }

    }

    if(fail){
        cout<< -1 <<endl;
    }
    else{
        for(int r= 0; r<k; r++){
            for(int c= 0; c<3; c++){
                cout<< ans[r][c]<<" ";
            }
            cout<<endl;
        }
    }

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(true)
    solve();


    return 0;
}
