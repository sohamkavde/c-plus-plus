#include <iostream>
using namespace std;

int main(){
    int a ,count=1;
    cin>>a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {          
           cout<< count++ <<" ";
        }
        cout<<endl;
        
    }
     return 0;
}
// print number in increasing order from left  of right according to row number