//Write a function to compute the sum of just the positive numbers in an array
//of integers. First, solve the problem using iteration. Then, using the technique
//shown in this chapter, convert your iterative function to a recursive function.

#include <iostream>

using namespace std;

int sum(int* ary, int sz){
    if(sz == 0) return 0;
    return ((ary[sz-1]>0)? ary[sz-1] : 0)+sum(ary, sz-1);
}

int main(void)
{
    int ary[6]= {7, -3, 4, 6, -1, 2};
    
    cout<< sum(ary, 6) <<endl;
    return 0;
}