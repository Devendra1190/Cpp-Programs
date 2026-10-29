#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter n: ";
    cin >> n; 

    // Method 1:

    for(int i =1 ; i <= 2*n+1; i++){
    // cout << "* * * * * * * * *";
        cout <<"*" <<" ";
    }
    cout << endl;
   
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n+1-i; j++){
            cout << "*" <<" ";
        }
        for(int j = 1; j <= 2*i-1 ; j++){
            cout << " " <<" ";
        }
          for(int j =1; j <= n+1-i; j++){
            cout << "*" <<" ";
        }
        cout << endl;
    }

    cout << endl;

    

    // method 2: 

    //  ye 2 stars kam print karenge upar wale se


        for(int i =1 ; i <= 2*n-1; i++){
    // cout << "* * * * * * * * *";
        cout <<"*" <<" ";
    }
    cout << endl;
    n--;
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n+1-i; j++){
            cout << "*" <<" ";
        }
        for(int j = 1; j <= 2*i-1 ; j++){
            cout << " " <<" ";
        }
          for(int j =1; j <= n+1-i; j++){
            cout << "*" <<" ";
        }
        cout << endl;
    }
}