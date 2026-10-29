#include <iostream>
using namespace std;
int main()
{
    int n, a, d;
    cout << "enter last term: ";
    cin >> a;
    cout << "enter common difference: ";
    cin >> d;
    cout << "enter first  term: ";
    cin >> n;

    // for(int i = 99 ; i > 0 ; i -= 4){
    //     cout<<i<<" ";
    // }

    for (int i = n; i > a; i += d)
    {
        cout << n << " ";
        n += d;
    }
}