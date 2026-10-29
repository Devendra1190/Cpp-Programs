#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    cout << "enter third number: ";
    cin >> c;

    if (a >= b and a >= c)
        cout << "a is greatest";
    else if (b >= a and b >= c)
        cout << "b is greatest";
    else
        cout << "c is greatest";



    //     Using nested if-else

    // if (a >= b)
    // {
    //     if (a >= c)
    //     {
    //         cout << "a is greatest";
    //     }
    //     else
    //         cout << "c is greatest";
    // }
    // else
    // {       // a to ab bada nhi hai 
    //     if (b >= c)
    //     {
    //         cout << "b is greatest";
    //     }
    //     else
    //         cout << "c is greatest";
    // }
}