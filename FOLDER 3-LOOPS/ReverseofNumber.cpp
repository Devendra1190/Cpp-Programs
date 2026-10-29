#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        rev *= 10;     // rverse me 10 se multiply kardo
        rev += n % 10; // reverse me last digit add kar do
        n /= 10;       // number me se last digit remove kar do
    }
    cout << rev;
}