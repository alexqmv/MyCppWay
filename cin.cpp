#include <iostream>

using namespace std;

int main () 
{
    int num_1,num_2,result;
    num_1 = 100;
    num_2 = 105;

    float res;
    // cout << "Enter num_1: " << endl;
    // cin >> num_1;

    // cout << "Enter num_2: " << endl;
    // cin >> num_2;

    result = num_1 + num_2;
    cout << "Result is: " << result << endl;

    result = num_1 - num_2;
    cout << "Result is: " << result << endl;

    result = num_1 * num_2;
    cout << "Result is: " << result << endl;

    res = (float)num_1 / (float)num_2;
    cout << "Result is: " << result << endl;

    result = num_1 % num_2;
    cout << "Result is: " << result << endl;

    return 0;

}
