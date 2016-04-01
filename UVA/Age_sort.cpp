#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

#define pf printf
#define sf scanf
//size of array (array must be in scope)
#define arySZ(a) sizeof(a)/sizeof(a[0])  


typedef long L;                 //"%ld"
typedef long long LL;           //"%lld"
typedef long double ld;         //"%f"
typedef unsigned int ui;        // "%u"
typedef unsigned long  ul;      //"%lu"
typedef unsigned long long ull; //"%llu"


using namespace std;

const ull SZ = 2e6;
ull pep[SZ+10];

template <typename T> inline void Swap(T&a, T&b){T temp= a; a= b; b= temp;}

//inline void sort(ull* ary, ul sz)
//{
//    ull mn;
//    for(ui i= 0, j; i<sz-1; i++)
//    {
//        for(j= i+1, mn= i; j<sz; j++)
//        {
//            if(ary[mn]>ary[j])
//                mn= j;
//        }
//        
//        swap(ary[mn], ary[i]);
//    }
//}

inline int ascc(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );     //ascending
//    return ( *(int*)b - *(int*)a);    //descending
}


void age_sort(void)
{
    ul n;
    
    while(sf("%lu", &n) == 1 && n != 0)
    {
        for(ul i= 0; i<n; i++)
            sf("%llu", &pep[i]);
        
//        sort(pep, n);
        
        qsort(pep, (size_t) n,sizeof(ull), ascc);
        
        for(ul i= 0; i<n; i++){
            pf("%llu ", pep[i]);
        }
            puts("");
    }
    
}


int main(void)
{
     age_sort();
    return 0;
}