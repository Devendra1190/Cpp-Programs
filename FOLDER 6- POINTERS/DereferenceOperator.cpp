#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int* ptr = &x;
    *ptr += 8;            // x ki value change ho jaegi isse (*ptr)
    cout << *ptr << endl; // dereference operator
    cout << ptr << endl;
    cout << &ptr;
}