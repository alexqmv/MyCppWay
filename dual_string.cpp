#include <iostream>
#include <string>
// #include <cstring>
using namespace std;

int main () {
	
	string s1,s2,res;
	
	cout << "Enter string s1: ";
	getline(cin,s1);
	
	cout << "Enter string s2: ";
	getline(cin,s2);
	
	res = s1 + s2;
	
	cout << "Result String is: " << res << endl;
	
	return 0;
}
