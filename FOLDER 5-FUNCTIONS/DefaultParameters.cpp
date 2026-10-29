#include <iostream>
using namespace std;

void power(int base , int exponent = 2){
    int ans = 1;
    for(int i = 0; i < exponent ; i++){
        ans *= base;
    }
    cout << ans << endl;
}

int main (){
    power(5);   // yaha par by default exponent ki value 2 ho jaegi (5,2)
    power(5,3);
}