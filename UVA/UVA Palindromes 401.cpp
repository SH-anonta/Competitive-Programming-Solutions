#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

#define pf printf
#define sf scanf
#define arySZ(a) sizeof(a)/sizeof(a[0])  //(array must be in scope)
#define DEBUG(x) cout<< ">> " << #x << ": " << x <<endl
#define SIG cout<< ">_<LOOOOOK@MEEEEEEEEEEEEEEEEEEEE" <<endl;
#define NL pf("\n");
//#define FLUSH

typedef long L;                 //"%ld"
typedef long long LL;           //"%lld"
typedef long double ld;         //"%f"
typedef unsigned int ui;        // "%u"
typedef unsigned long  ul;      //"%lu"
typedef unsigned long long ULL; //"%llu"

//constants
const int SZ= 1e4;
const double PI = 2*acos(0.0);
const int INF=  (1<<29);

//functions template 
template <typename T>void parry(T* ary, int len){printf("%d", ary[0]);for(int i= 1; i<len; i++) printf(" %d", ary[i]);printf("\n");}
template <typename T>void rarry(T* ary, int len){for(int i= 0; i<len/2; i++)swap(ary[i], ary[len-i-1]);}
bool ispal(char* str, int len){for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
LL bin2dec(char* bin) {LL dec= 0;short i= 0, len= strlen(bin) -1;while(bin[i]){if(bin[i++]=='1'){dec += 1<<len;} len--;}return dec;}
inline LL POW(LL base, int exp){ LL p= 1; while(exp-->0){p *= base;} return p;}
bool comp(const int& a, const int& b){return a>b;} //reverse sort
//template <typename T>bool comp(const T& a, const T& b){return a>b;}

char tomir(char ch)
{
    switch(ch)
    {
        case 'A': return ch;
        case 'H': return ch;
        case 'I': return ch;
        case 'M': return ch;
        case 'O': return ch;
        case 'T': return ch;
        case 'U': return ch;
        case 'V': return ch;
        case 'W': return ch;
        case 'X': return ch;
        case 'Y': return ch;
        case '1': return ch;
        case '8': return ch; break;
        
        case 'E': return '3';
        case 'S': return '2';
        case 'Z': return '5';
        case '2': return 'S';
        case '3': return 'E';
        case '5': return 'Z';
        case 'L': return 'J';
        case 'J': return 'L';
        //WPRK
        
        
        default : return 'a';
    }
}

bool ismirr(char* str, int len)
{
    for(int i= 0; i<=len/2; i++)
    {
        if(tomir(str[i]) == str[len-i-1])
            continue;
        else
            return false;
    }
    return true;
}



void name(void)
{
    char str[500];
    bool pal= false, mir= false;
    int len;
    while(sf("%s", str) == 1)
    {
        len= strlen(str);
        
        pal = ispal(str, len);
        
        mir = ismirr(str, len);
        
        if(pal == true && mir ==true) pf("%s -- is a mirrored palindrome.\n", str);
        if(pal == true && mir == false) pf("%s -- is a regular palindrome.\n", str);
        if(pal == false && mir == true)  pf("%s -- is a mirrored string.\n", str);
        if(pal == false && mir == false) pf("%s -- is not a palindrome.\n", str);
        NL
    }
}


int main(void)
{
    name();
    
//    experiments go here
//    cout<< ismirr("ATOYOTA",7)<<endl;
//    cout<< tomir('D') <<endl;
    
    return 0;
}