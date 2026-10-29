#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        // int lastdigit = n%10;
        // sum += lastdigitf;
        sum += (n % 10);  // sum me last digit add kar do
        n /= 10;          // number me se last digit remove kar do
    }
    cout << sum;
}