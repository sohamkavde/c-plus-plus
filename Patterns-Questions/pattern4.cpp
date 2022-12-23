#include <iostream>
using namespace std;

int main(){
    int a , b;
    cin>>a>>b;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if(j > b-i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
     return 0;
}
// print * from right to left in increasing order