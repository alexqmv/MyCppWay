#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int getValueFromUser() {
		
	cout << "Enter an integer: ";
	int q;
	cin >> q;
	return q;
	
}

int main () {
	
	int a = getValueFromUser();
	int b = getValueFromUser();
	
	cout << a << "+" << b << "=" << a + b << endl;
	
	return 0;
}
