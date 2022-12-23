#include<iostream>
using namespace std;

int main(){
    int a = 10000;
    int b = 20000;
    int*ap = &a;
    int*bp = &b;
    cout<<"before swapping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    *ap = *ap+*bp;
    *bp = *ap - *bp;
    *ap = *ap - *bp;
    cout<<"after swapping "<<endl;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}