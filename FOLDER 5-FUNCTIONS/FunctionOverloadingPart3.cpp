#include<iostream>
using namespace std;
void fun(int x,char y){
    cout<<"hi"<<endl;
}

void fun(char y,int x){
    cout<<"good morning"<<endl;
}

int main(){
    fun(5,'a');
    fun('b',6);
    //fun(5,3);     this wil give an error
}