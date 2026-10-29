#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    if (n >= 100 and n <= 9999)          // we can also use && in place of and
        cout << "four digit number";
    else
        cout << "not a four digit number";
}