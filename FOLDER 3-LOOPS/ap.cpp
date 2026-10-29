#include<iostream>
using namespace std;
int main(){
    int n , a ,d;
    cout<<"enter first term: ";
    cin>>a;
    cout<<"enter common difference: ";
    cin>>d;
    cout<<"enter last term: ";
    cin>>n;
    for(int i =1 ;i <= n ;i++){
        cout<<a<<" ";
        a += d;
    }
}