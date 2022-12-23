#include <iostream>
#include<cmath>
using namespace std;
// Check whethear given number is prime or not
int main(){
    int a;
    cin>>a;
    bool flag = 0;
    for (int i = 2; i < sqrt(a); i++)
    {
       if(a%i == 0){
           cout<<"The number is not prime number ";
           flag = 1;
           break;
       }
    }
    if(flag ==0){
        cout<< "The number is prime-number";
    }
    return 0;
}