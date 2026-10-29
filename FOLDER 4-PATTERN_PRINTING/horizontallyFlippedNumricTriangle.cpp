#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j <<" " ;
        }
        cout << endl;
    }
    cout<<endl;

      for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout << i<<" " ;
        }
        cout << endl;
    }

     cout<<endl;

      for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout << (char)(i+64)<<" " ;
        }
        cout << endl;
    }
}