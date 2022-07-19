#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    for (int i = 1; i <= a; i++)
    {
        int j;
        for (j = 1; j <a-i+1; j++)
        {
           cout<<" ";
        }
        for (j = 1; j <= i; j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
        
    }
    return 0; 
}
// 5
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5