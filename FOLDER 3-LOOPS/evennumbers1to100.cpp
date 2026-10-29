#include<iostream>
using namespace std;
int main(){
    //bad code : 100 Iterations
    // for(int i = 1; i <= 100 ;i++){
    //     if(i%2==0) cout<<i<<" ";
    // }


    //good code : 50 Iterations
    // for(int i = 2; i <= 100; i += 2){
    //     cout<<i<<" ";
    // }

    //  50 Iterations
      for(int i = 1; i <= 50; i++){
        cout<<i*2<<" ";
    }
}