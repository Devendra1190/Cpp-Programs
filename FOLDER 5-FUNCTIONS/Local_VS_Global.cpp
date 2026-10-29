#include <iostream>
using namespace std;
int x = 10; // global variable
void change (){
    x = 45;  // x =10 change hokar x=45 ho jaega
}
int main(){
    int x = 80; 
    cout << x << endl;
    change();
    cout << x << endl;
}