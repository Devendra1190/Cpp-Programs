#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    // Method 1:
    // for (int i = 1; i <= n; i++)
    // {
    //      for (int j = 1; j <= n ; j++)
    //      {
    //         if ((i+j>n))
    //         {
    //         cout<<"*"<<" ";
    //         }
    //         else cout<<" "<<" ";
    //     }
    //     cout<<endl;
    // }

    // Method 2

    for (int i = 1; i <= n; i++)
    {
         for (int j = 1; j <= n - i ; j++)  //n+1-i ki jagah n-i kar diya 
         {
            cout<<" "<<" ";
         }
         for(int k = 1; k <= i ; k++){
            cout<<"*"<<" ";
         }
        cout<<endl;
    }
}