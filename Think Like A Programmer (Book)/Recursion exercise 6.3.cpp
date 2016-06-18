//Write a function that is passed an array of integers and a “target” number
//and that returns the number of occurrences of the target in the array. Solve
//the problem first using iteration, then recursion.



#include <iostream>

using namespace std;

int occur(int* ary, int size, int target){
    if(size == 0) return 0;
    return (ary[size-1] == target) + occur(ary, size-1, target);
}

int main(void)
{
    int ary[6]= {1, 2, 3, 1, 3, 1};
    
    
    cout<< occur(ary, 6, 1) <<endl;
    
    
    return 0;
}