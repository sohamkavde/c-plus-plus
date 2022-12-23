#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){    
        for (int j = 2; j <= sqrt(n); j++)
        {
            if(n%j==0){
               return false;
            }
        }
        return true;
}
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}