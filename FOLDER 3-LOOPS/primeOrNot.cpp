#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;


    //  Method : 1
    // int factors = 0;
    // for(int i =2 ;  i <= sqrt(n); i++){
    //     if(n % i ==0) //factor mil gaya
    //     factors++;
    // }
    // if(factors >= 3) cout<<"composite number";
    // else cout<<"prime number";


    //     Method : 2

   bool flag = false;   //false means prime number
    for(int i =2 ;  i <= sqrt(n); i++){
        if(n % i ==0)
         flag = true;  //true: not a prime number
       break;
      }
        if(n == 1) cout<<"neither prime nor composite";
        else if(flag == true) cout<<"composite number";
        else   
        cout<<"prime number";
}