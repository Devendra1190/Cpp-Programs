#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int count = 0;
    if (n == 0)
        count++;
    while (n != 0)
    {
        n /= 10;    // number me se last digit remove kar do
        count++;    // count me 1 incease kar do
    }
    cout << count;
}