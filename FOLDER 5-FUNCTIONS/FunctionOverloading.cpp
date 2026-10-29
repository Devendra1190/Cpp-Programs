#include<iostream>
using namespace std;
void fun(){
    cout<<"hi"<<endl;
}

void fun(int x){
    cout<<"good morning"<<endl;
}

//This Will Give Error
// void fun(int x = 7){
//     cout << "good morning"<< endl;
// }

void fun(int x , int y){
    cout<<"kaise ho"<<endl;
}

int main(){
    fun();
}