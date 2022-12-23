#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    for (int i = 1; i <= a; i++)
    {
        int j;
       for (j =1; j <=a-i; j++)
       {
          cout<<"  ";
       }
       int k = i;
       for (; j <=a; j++)
       {
           cout<<k--<<" ";
       }
       k = 2;
       for (; j <=a+i-1; j++)
       {
           cout<<k++<<" ";
       }     
       
       cout<<endl;
    }
     return 0;
}
// 5
//         1 
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5