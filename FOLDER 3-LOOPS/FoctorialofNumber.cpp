#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "enter the base: ";
    cin >> a;
    cout<<"enter the exponent: ";
    cin>>b;
    int ans=1;
    for (int i =1 ; i <=b ; i++)
    {     
        ans *=a;
        if(a == 1) break;
    }
    if(a == 0 and b == 0) cout<<"indeterminate form";
    else cout << ans;
}