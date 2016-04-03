//#Name: Anonta Haque #Problm:  

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <cctype>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

short COUNT_;
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;


template <typename T>void pary(T* st, T* nd){/*pf("%d", *st++);*/while(st<nd)printf("%d ", *st++);printf("\n");}

char s3[210], s2[110], s1[110];


bool find(char* str1, char* str2)
{
    int len= strlen(str2);
    int matchcc;
    for(int i= 0; str1[i]; i++)
    {
        matchcc= 0;
        for(int j= 0; str1[i+j] && j<len; j++)
        {
            if(str1[i+j] == str2[j]){
                matchcc++;
            }            
        }
        if(matchcc == len){
            return true;
        }
    }
    
    return false;
}

void solve(void)
{
    int len;
    int map1[27], map2[27]; //count of of occurance of letters 
    char *ps1, *ps2, *ps3;
    
    while(cin>>s1>>s2>>s3)
    {
        //reset maps
        for(int i= 0; i<26; i++){
            map1[i]= map2[i]= 0;
        }
        
        ps1= s1;
        ps2= s2;
        ps3= s3;
        
        while(*ps1){
            map1[*ps1 -'A']++;
            ps1++;
        }
        while(*ps2){
            map1[*ps2 -'A']++;
            ps2++;
        }
        
        while(*ps3){
            map2[*ps3 -'A']++;
            ps3++;
        }
        
        int i;
        for(i= 0; i<26; i++){
            if(map1[i] == map2[i])
                continue;
            else break;
        }
        if(i == 26){
            cout<< "YES"<<endl;
        }
        else
            cout<< "NO"<<endl;
        
//        pary(map1, map1+26);
//        pary(map2, map2+26);
    }
    
}



int main(void)
{
    solve();       
    
//    cout<< find("lenstr", "") <<endl;
    return 0;
}



