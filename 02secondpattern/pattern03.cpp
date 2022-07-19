#include  <iostream>
using namespace std;

int main(){
    int a,b,c=1;
    cin>>a>>b;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= ((b*2)-1); j++)
        {
            if(j>b-i){ 
                if(c <= 5){
                cout<<"*";
                c++;
                }
            }else{
                cout<<" ";
            }
        }
        c = 1;
        cout<<endl;        
    }
   return 0;  
}
//     *****
//    *****
//   *****
//  *****
// *****
// In vidoe there is used two inner loops for printing pattern