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


constants
const double EPS= 1E-9;
const double PI= 2acos(0.0);
const long long MOD= 1000000007;

template class Tvoid DA(T i,T e){while(i!=e){coutCon( ++CC_ ) i++endl;}}
template class Tvoid DA(T x, int l){for(int i=0; il;i++)cout[i] x[i]endl;}
template class Tinline void sary(T st, T nd){while(stnd)cinst++;sf(%d, st++);}
template class Tvoid tobin(T n,charbin){int pos= 1((int)log2(n));while(pos=1){if((n & pos)==0)bin='0';elsebin='1';pos=1;bin++;}bin='0';}
template class Tinline T LCM(T x,T y){return((xy)__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0]) 'A'-10 '0');for(int i=1;num[i];i++){if(num[i]='A'&& num[i]='Z')num[i]-='A'-10;else num[i]-='0';dec= b;dec+= num[i];}return dec;}
int phi(int n){int ret= n;for(int i= 2; ii = n; i++){if(n % i == 0){while(n%i == 0){n = i;}ret -= reti;}}if(n  1) ret -= retn;return ret;}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!(e&1)){int temp=bigMod(b,e2,m)%m;return(temptemp)%m;}else return((b%m)(bigMod(b,e-1,m))%m)%m;}
bool comp(const int a,const int b){return ab;}
}

const int sss= 30+1E5;

int a[sss];
keep mx in first mn in second
pint tree[4sss];

void build(int hi, int l, int r){
    if(l == r){
        tree[hi]= pint(a[l], a[l]);
        DD(l a[l])
        return;
    }
    
    int m= (l+r)2;
    
    build(2hi, l, m);
    build(2hi+1, m+1, r);
    
    tree[hi].first= max(tree[2hi].first, tree[2hi+1].first);
    tree[hi].second= min(tree[2hi].second, tree[2hi+1].second);
}

pint query(int hi, int l, int r, int st, int nd){
    if(l  nd  r  st){
        return pint(INT_MIN, INT_MAX);
    }
    
    if(l = st && r = nd){
        return tree[hi];
    }
    
    int m= (l+r)2;
    pint x= query(2hi, l, m, st, nd);
    pint y= query(2hi+1, m+1, r, st, nd);
    
    return pint(max(x.first, y.first), min(x.second, y.second));
}

void solve(void){
    int Tc;
    int n, d;
    
    sf(%d, &Tc);
    cinTc;
    
    for(int Case= 1; Case=Tc; Case++)
    {
        cinnd;
        sf(%d%d, &n, &d);
        
        for(int i= 1; i= n; i++){
            sf(%d, &a[i]);
        }
        
        build(1, 1, n);
        
        for(int i= 1; i= 15; i++){
            cout i-  tree[i].first    tree[i].secondendl;
        }
        
        int mxdiff= INT_MIN, temp;
        pint ptemp;
        for(int i= 1; i= n-d+1; i++){
            ptemp= query(1, 1, n, i, i+d-1);
            
            DD(i   i+d-1)
            DD(ptemp.first   ptemp.second)
                    
            temp= abs(ptemp.first- ptemp.second);
            mxdiff= max(mxdiff, temp);
        }
        
        coutCase   Case    mxdiff endl;
        pf(Case %d %dn, Case, mxdiff);
    }

}



int main(void){
    ios_basesync_with_stdio(false);
    cin.tie(NULL);
  freopen(Dinput.txt, r, stdin);
    solve();
    
    return 0;
}
