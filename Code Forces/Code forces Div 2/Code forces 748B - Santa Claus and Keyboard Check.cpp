#Name Sofen Hoque Anonta  #Problm
#include bitsstdc++.h
using namespace std;

FOLD ME
namespace{
typedef long long LL;
typedef vectorint vint;
typedef pairint,int pint;
typedef unsigned long long ULL;

Macros
int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL coutendl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout #x_n;DA(x_.begin(), x_.end());
#define DD(x_) cout( ++CC_ ) #x_ x_endl;
#define SS printf(_LOOOOOK@MEEEEEEEEEEEEEEE( %d )n,++CC_);
#define EXT(st_) coutnExicution Time (double)(clock()-st_)CLOCKS_PER_SECendl;
#define DM(MT,n_,m_)pf(Matrix %sn   , #MT);for(int i_= 0;i_m_;i_++)pf(%4d , i_);NL;NL;for(int r_=0;r_n_;r_++){pf(%2d , r_);for(int c_= 0;c_m_;c_++)pf(%4d , MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));
}

char mp[100];

void solve(void){
    int n;
    string s, t;
    
    cinst;
    int len= s.size();
    
    char x, y;
    int cc= 0;
    for(int i= 0; ilen; i++){
        if(s[i] == t[i]){
            mp[s[i]]= mp[t[i]]= s[i];
        }
    }
    
    for(int i= 0; ilen; i++){
        x= s[i];
        y= t[i];
        
        if(x == y) continue;
        
        if(mp[x] == 0 && mp[y] == 0){
            cc++;
            mp[x]= y;
            mp[y]= x;
        }
        else if(mp[x] != y){
            cout -1 endl;
            return;
        }
        else{
            mp[x]= y;
        }
    }
    
    pf(%dn, cc);
    for(char i= 'a'; i='z'; i++){
        if(mp[i] != 0 && i != mp[i]){
            pf(%c %cn, i , mp[i]);
            mp[mp[i]]= 0;
        }
    }
        

}



int main(void){
    solve();
    
    return 0;
}