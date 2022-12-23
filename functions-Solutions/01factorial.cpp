#include <iostream>
using namespace std;
long long int factorial(int a){
   long long int  result = 1;
   for (long long int i =1; i <=a; i++)
   {
       result *=i;
   }
   return result;
}

int main(){
    int a;
    cin>>a;
    
    cout<<factorial(a)<<endl;
}