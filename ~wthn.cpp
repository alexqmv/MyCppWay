#include <iostream>



using namespace std;

int main () 
{
    int num_1,num_2,result;
    num_1 = 100;
    num_2 = 100;

    float res;

    cout << "Number 1 is " << num_1 << endl;
    cout << "Number 2 is " << num_2 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    // cout << "Enter num_1: " << endl;
    // cin >> num_1;

    // cout << "Enter num_2: " << endl;
    // cin >> num_2;

    result = num_1 + num_2;
    cout << " + Result is: " << result << endl;

    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    result = num_1 - num_2;
    cout << " - Result is: " << result << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;

    result = num_1 * num_2;
    cout << " * Result is: " << result << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;

    res = (float)num_1 / (float)num_2;
    cout << "/ Result is: " << result << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;

    result = num_1 % num_2;
    cout << "% Result is: " << result << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;

    return 0;

}
