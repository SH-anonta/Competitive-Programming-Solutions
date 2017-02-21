#include <iostream>

using namespace std;

int main(void)
{
    int n;
    string s;
    
    long long c= 1;
    
    cin>>s;
    
    c= 25+25+1;
    
    int len= s.size()-1;
    
    c+= 25*len;
    
    cout<< c <<endl;
    
    return 0;
}