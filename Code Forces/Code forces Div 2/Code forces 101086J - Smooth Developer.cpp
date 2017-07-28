//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

//FOLD ME
namespace{
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

//Macros
int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL cout<<endl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));


//constants
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

}

const int sss= 1E6;

map<string, int> mp;
map<int, string> rmp;

int sequence;
bool visit[100005];

vint g[100005];

int entry(string s){
    int k= mp[s];
    if(k == 0){
        mp[s]= sequence;
        rmp[sequence]= s;
        k= sequence;
        sequence++;
    }


    return k;
}


void dfs(int n){
    if(visit[n]) return;
    visit[n]= 1;


    int len= g[n].size();

    for(int i= 0; i<len; i++){
        dfs(g[n][i]);
    }

}

void solve(){
    int Tc;
    int n, k;

    cin>>Tc;

    string name, temp;
    int c;
    for(int Case= 1; Case<=Tc; Case++){
        sequence= 1;
        mp.clear();
        rmp.clear();

        cin>>n>>k;

        for(int i= 0; i<n; i++){
            cin>>name>>c;


            int u, v;
            u= entry(name);

            while(c--){
                cin>>temp;
                v= entry(temp);
                g[u].push_back(v);

            }
        }

//        for(int i= 1; i<sequence; i++){
//            cout<< rmp[i] <<" ";
//            for(int j= 0, len= g[i].size(); j<len; j++){
//                cout<< rmp[g[i][j]] << " ";
//            }
//            cout<<endl;
//        }



        int id;
        for(int i= 0; i<k; i++){
            cin>>temp;
            id= mp[temp];

            dfs(id);
        }

        for(int i= 1; i<sequence; i++){

            if(visit[i] == true){
                cout<< rmp[i] <<"\n";
            }
        }

        for(int i= 1; i<sequence; i++){
            visit[i]= false;
            g[i].clear();
        }
    }

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);
    solve();

    return 0;
}