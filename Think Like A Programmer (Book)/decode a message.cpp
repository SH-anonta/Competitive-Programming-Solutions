/*
 converts char array string array to long integers 
 */

#include <iostream>
#include <string>
#include <cstring>

enum modes {Upperm= -1, Lowerm, Puncm};

using namespace std;

long st2long(const string &st)
{
    long nhold= 0;
    int stlen = st.size();
    long ten= 1;
    
    while(stlen--)
    {
        nhold += (st[stlen] - '0') *ten;
        
        ten *= 10;
    }
    
    return nhold;
}

char desipher(unsigned int n, modes m)
{
    char hold;
    switch (m)
    {
        case Upperm:
        {
            hold = n + 'A';
        }
        case Lowerm:
        {
            
        }
        case Puncm:
        {
            
        }
        
    }
}

int main(void)
{
    char ch;
    string num= "24484";
    string msg;
    modes mode= Upperm;
    
//    while(cin.get(ch) && ch != '\n')
//    {
//        if(ch == ',')
//        {
//            //TODO
//            //send str to function to decode
//            st2long(num);
//            num.clear();
//            continue;
//        }
//        else
//        {
//            num += ch;
//        }
//    }
    
    
    cout<< st2long(nn)<<endl;
    
    return 0;
}