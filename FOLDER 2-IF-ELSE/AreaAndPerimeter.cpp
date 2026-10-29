#include <iostream>
using namespace std;
int main()
{
    float l,b, area, perimeter;
    cout << "enter length: ";
    cin >> l;
    cout << "enter breadth: ";
    cin >> b;
    area = l * b;
    perimeter = 2 * ( l + b );
    if(area > perimeter) cout<<"Area is greater than perimeter";
    else if(perimeter>area) cout<<"Perimeter is greater than area";
    else cout<<"Neither area is grater nor perimeter is greater";
}