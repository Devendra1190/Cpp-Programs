#include<iostream>
using namespace std;
void fun(char x){
    cout<<"hi"<<endl;
}

void fun(int x){
    cout<<"good morning"<<endl;
}


void fun(double x){
    cout<<"kaise ho"<<endl;
}

int main(){
    fun(5);
    fun(4.0);
     fun('A');
}