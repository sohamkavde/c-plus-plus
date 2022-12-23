#include<iostream>
using namespace std;

int main(){
    int a[3] = {1,2,3};
    int* b =  a;
    int* c;
    c = a;//In case of array no need to use & but in case of variable we must add & before the  variable name(which is goint to be refrenced by other variable)
    cout<<"a = "<<*a<<endl;//print first element of the array, Hence array name store the address the first element of array
    cout<<"b = "<<*b<<endl;//  print first element of the array
    
    // Now I'm going to initialise pointer first as array and assign values after declaration

    int* ptr2[2]; // created/declared pointer array or array of pointer
    int ptr1[2]={1,2};
    // wrong way to add value in array of pointer
    // ptr2[0] = ptr1[0]; //ptr2[0] = address , ptr1[0] = value | we can not initialise value in address section
    // ptr2[1] = ptr1[1];
    // right way to add value in array of pointer
    ptr2[0] = &ptr1[0];
    ptr2[1] = &ptr1[1];
    // for(int i=0;i<2;i++)  
    // {  
    //     ptr2[i]=&ptr1[i];   
    // }
    for(int i=0;i<2;i++)  
    {  
       cout<<*ptr2[i]<<endl;   
    }
}