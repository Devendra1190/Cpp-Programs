#include <iostream>
using namespace std;

// Method 1: repetition method

// int main()
// {
//     int a;
//     cout << "enter a: ";
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*"<<" ";
//         }
//         cout << endl;
//     }
//      int b;
//     cout << "enter b: ";
//     cin >> b;
//     for (int i = 1; i <= b; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*"<<" ";
//         }
//         cout << endl;
//     }
//      int c;
//     cout << "enter c: ";
//     cin >> c;
// for (int i = 1; i <= c; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << "*"<<" ";
//     }
//     cout << endl;
//     }
// }

// Method 2: Function methodि
void starTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a, b, c;
    cout << "enter a: ";
    cin >> a;
    starTriangle(a);
    cout << "enter b: ";
    cin >> b;
    starTriangle(b);
    cout << "enter c: ";
    cin >> c;
    starTriangle(c);
}