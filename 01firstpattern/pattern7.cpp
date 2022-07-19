#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <=b*2; j++)
        {
            if(i>=j){
                cout<<"*";
            }else if(i+((b*2)-i*2)<j){
                cout<<"*";
            }else{
            cout<<" ";
            }           
        
        }
        cout<<endl;
    }

      for (int i = a; i >=1; i--)
    {
        for (int j = 1; j <=b*2; j++)
        {
            if(i>=j){
                cout<<"*";
            }else if(i+((b*2)-i*2)<j){
                cout<<"*";
            }else{
            cout<<" ";
            }           
        
        }
        cout<<endl;
    }
 return 0;
}
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *