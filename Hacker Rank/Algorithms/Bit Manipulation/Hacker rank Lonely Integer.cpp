#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, temp, lonely= 0;
    cin>>n;
    
    while(n--){
        cin>>temp;
        lonely ^= temp;
    }
    
    cout<< lonely <<endl;
    return 0;
}
