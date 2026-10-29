#include <iostream>
using namespace std;
void change(int x){
    x = 20;    // x ka ek dabba bana us dabbe me main se value aa gyi change me x wale value ko 20 kar diya
}
int main()
{ 
    int x = 10;   // x ka ek dabba bana usme 10 value di gyi
    change(x);    // isko change function me bhej diya
    cout << x << endl ;  // main wale x ko print kar diya
}