#include <bits/stdc++.h>

using namespace std;


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


typedef pair<int, int> pint;

const int sss= 200006;
pint prog[sss];
pint chess[sss];

//bool comp(pint a, pint b ){
//    retunr a.second > b.second;
//}

int main(void)
{
    int n, m, l, r;
    
    cin>>n;
    
    
    for(int i= 0; i<n; i++){
        cin>>l>>r;
        chess[i]= pint(l,r);
    }
    
    cin>>m;
    for(int i= 0; i<m; i++){
        cin>>l>>r;
        prog[i]= pint(l,r);
    }
    
    int psmx = prog[0].first;
    int psmn = prog[0].first;
    
    int pnmx= prog[0].second;
    int pnmn= prog[0].second;
    
    int csmx= chess[0].first;
    int csmn= chess[0].first;
    
    int cnmx = chess[0].second;
    int cnmn = chess[0].second;
    
    
    for(int i= 1; i<n; i++){
        csmx = max(csmx, chess[i].first);
        cnmn = min(cnmn, chess[i].second);
    }
    
    for(int i= 1; i<m; i++){
        psmx = max(psmx, prog[i].first); 
        pnmn = min(pnmn, prog[i].second);
    }
    
    int d1 = psmx - cnmn;
    int d2 = csmx - pnmn;
    
    int mx= max(d1,d2);
    cout<< (( mx < 0) ? 0 : mx) <<endl;
    
    
    return 0;
}