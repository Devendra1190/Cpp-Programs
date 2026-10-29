#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (2 * j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //   int a = 1;
    //   this will print:
    //   1
    //   3 5
    //   7 9 11 
    //   13 15 17 19
     
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
}
