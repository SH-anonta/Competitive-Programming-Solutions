#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    string s;
    set<string> st;
    cin>>s;
    
    int len= s.size()-1;
    
    st.insert(s);
    while(len--){
        s.push_back(s[0]);
        
//        cout<< s<<endl;
        
        s.erase(0, 1);
        st.insert(s);
    }
    
    
    cout<< st.size() <<endl;
    return 0;
}