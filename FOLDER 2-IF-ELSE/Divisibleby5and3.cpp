#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
  
        if (n % 15 == 0  )               // if (n % 5 == 0 && n % 3 == 0)
            cout << "Divisible by 5 and 3 both";
        else if (n % 3 == 0)
            cout << "Divisible by 3 only";
        else if (n % 5 == 0)
            cout << "Divisible by 5 only";
        else
            cout << "neither divisible by 3 nor by 5";
}