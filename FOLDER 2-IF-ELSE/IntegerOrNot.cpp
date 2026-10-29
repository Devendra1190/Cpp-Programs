#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "enter a real number: ";
    cin >> x;
    int y = (int)x;
    if (y == x)
        cout << "Integer number";
    else
        cout << "Not an Integer Number";
}