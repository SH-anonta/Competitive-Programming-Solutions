#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int b, r, y, k;
	
	cin>>b>>r>>y;
	
	cin>>k;
	int combo= 1;
	
	string s;
	while(k--){
		cin>>s;
		
		if(s == "Red") combo*= r;
		else if(s == "Yellow") combo*= y;
		else combo*= b;
	}
	
	cout<< combo <<endl;
	return 0;
}