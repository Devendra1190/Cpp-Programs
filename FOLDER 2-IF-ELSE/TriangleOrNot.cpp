#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter first side: ";
    cin>>a;
    cout << "enter second side: ";
    cin>>b;
    cout << "enter third side: ";
    cin>>c;
    if(a + b > c  and b + c > a and c + a > b)
       cout<<"Valid triangle";
    else 
    cout<<"Invalid triangle";
}