#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i =2 ;  i <= sqrt(n); i++){
        if(n % i ==0  ) {
            cout<<i<<" ";
        if(i != n/i) cout<<n/i<<" ";
      }
    }64
    
}