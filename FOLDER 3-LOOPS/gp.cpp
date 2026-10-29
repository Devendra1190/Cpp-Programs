#include<iostream>
using namespace std;
int main(){
    int n , a ,r;
    cout<<"enter first term: ";
    cin>>a;
    cout<<"enter common ratio: ";
    cin>>r;
    cout<<"enter last term: ";
    cin>>n;
    for(int i =1 ;i <= n ;i++){
        cout<<a<<" ";
        a *= r;
    }
}