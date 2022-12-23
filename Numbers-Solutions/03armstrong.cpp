#include <iostream>
#include<math.h>
using namespace std;
// Check weather given number  is armstrong or not i.e. 153 = 1^3+5^3+3^3
int main(){
    int a;
    cin>>a;

    int original = a;
    int sum = 0;
    while (a>0)
    {
        int lastdigit = a%10;
        sum += pow(lastdigit,3);
        a=a/10;
    }
    if(sum == original){
        cout<<"Armstrong number";
    }else{
        cout<<"Not a armstrong number";
    }
}