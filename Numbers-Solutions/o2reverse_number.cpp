#include <iostream>
using namespace std;
// reverse the given number
int main(){
    int a;
    cin>>a;
    int reverse = 0;
    while(a>0){
        int lastdigit = a%10;
        reverse = reverse*10+lastdigit;
        a = a/10;
    }
    cout<<reverse;
}
/*
153
0*10 + 3;
3*10+5 = 35
35*10 + 1 = 351
*/