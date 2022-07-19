#include<iostream>
using namespace std;

int main(){
    int a = 5; // initialise variable
    int* b = &a; // initialise pointer
    int* c;
    c = &a;
    cout<<"b = " << b <<endl; // stores address of the variable
    cout<<"*b = "<<*b <<endl; // stores value of the variable
    cout<<"initialise after declaration *c = "<< *c <<endl; // stores the value of varable

}