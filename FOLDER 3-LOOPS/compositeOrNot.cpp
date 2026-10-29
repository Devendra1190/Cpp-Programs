#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i = 2 ; i <= n-1; i++){
       if(n % i == 0) {
        cout<<"composite number";
        break;
       }
       else cout<<"not a composite number";
       break;
    }

    //Method 2
    //   bool flag = true;   //true means prime number
    // for(int i = 2 ; i <= n-1; i++){
    //    if(n % i == 0) {
    //     flag = false;  //false: not a prime number
    //     break;
    //    }
    // }

    //     if(n == 1) cout<<"neither prime nor composite";
    //     else if(flag  == true) cout<<"prime number";
    //     else cout<<"composite number";
}