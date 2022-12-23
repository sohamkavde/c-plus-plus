#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b-(i-1); j++)
        {
            cout<<j;
            
        }
        cout<<endl;
       
    }
     return 0;
}
// 12345
// 1234
// 123
// 12
// 1