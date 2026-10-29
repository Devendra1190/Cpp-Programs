#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    // same number at simultaneous positions ;then only one of them will be printed
    for(int i = 1; i <= n ; i++){
        cout<<i<<endl;
        if(i !=(n+1-i)) cout<<(n+1-i)<<endl;
}
//  same number will be printed ;example: take number 5 then 3,3, will repeat simultaneously
    // for(int i =1; i <= n; i++){
    //     cout<<i<<endl<<(n+1-i)<<endl;
    // }
}