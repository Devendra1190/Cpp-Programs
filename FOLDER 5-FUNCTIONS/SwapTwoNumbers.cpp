#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a,b: "<<endl;
    cin>>a;
    cin>>b;


    // Method 1

    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b;


    // Method 2
    
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout << a << " " << b;


    // Method 3

    a = (a + b) - (b = a);
    cout << a << " " << b;

}