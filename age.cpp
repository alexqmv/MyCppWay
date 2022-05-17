#include <iostream>
#include <algorithm>
#include <stdio.h>
#define OBS
#define Linux

using namespace std;

int main () {
	
	cout << "Enter your age: ";
	int my_age;
	cin >> my_age;
	
	cout << "Enter your friend's age: ";
	int your_friend_age;
	cin >> your_friend_age;
	
	cout << my_age << " and " << your_friend_age << " is " << my_age + your_friend_age;
	
	
	
	return 0;
}
