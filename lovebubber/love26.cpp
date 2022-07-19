#include <bits/stdc++.h>
using namespace std;
// pointer initialization , declaration , value print  of variable and pointer  along with address. perform arithmetic operation;
void update(int *ptr){
    *ptr = *ptr + 1;
}

void address_update(int  *ptr){
    ptr = ptr + 1;
    cout<<"In the function Scope address will be increase by 4 bit :"<<ptr <<endl;
}

int main()
{
    int i = 1;
    int *ptr = &i; // ptr save address  of i and *ptr save value of i , i is a variable
    // size  of i
    cout << "-------------------Get the size of variable and pointer----------" << endl;
    cout << "Size of i is :" << sizeof(i) << endl;
    cout << "Size of ptr is :" << sizeof(ptr) << endl;
    cout << "the variable  i has value :" << i << endl;
    cout << "address of i  is :" << &i << endl;
    cout << "the value of i  using pointer *ptr is :" << *ptr << endl;
    cout << "the address of i using pointer  ptr is :" << ptr << endl;
    cout << "----------------------Arithmatic  Operations----------------------" << endl;
    cout << "value of i before addition :" << *ptr << endl;
    *ptr = *ptr + 1;
    cout << "value of i afteer adding 1 to it :" << *ptr << endl;
    cout << "----------------------Double pointer---------------------------------------" << endl;
    int **ptr2 = &ptr;
    cout << "Address of ptr is :" << &ptr << endl;
    cout << "value of **ptr2 is :" << **ptr2 << endl;
    cout << "address strore of  ptr int ptr2 is :" << ptr2 << endl;
    cout << "--------------------Array using pointer-----------------------------------" << endl;
    int arr[5] = {1, 2, 3, 4, 5}; // Array with it value
    cout<<"arr refer to fist element of the array so address of first array is :" << arr<<endl;
    // can I update arr address
    // arr = arr+1; // We can not do this because address of array  is store  in symbole table which can't be changed
    // In case  of pointer it will generate no error
    cout<<arr;
    // Creating  Pointer Array
    int *ptr3[5]; // Pointer array with size 5
    cout << "----------------size of  array  and pointer ------------------------------" << endl;
    cout << "Size of arr is :" << sizeof(arr) << endl;
    cout << "Size of ptr3 " << sizeof(ptr3) << endl;
    cout << "----------------Adding value  in pointer from array --------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        ptr3[i] = &arr[i]; // Adding value to pointer array using normal array
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr3[i] << " "; // display element  from pointer
    }
    cout << endl
         << "----------------Arithmatic  Operations ---------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        *ptr3[i] = *ptr3[i] + 1; // increament  by one in each element of pointer
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr3[i] << " ";
    }
    cout<<endl;
    // pointer using function
    int k = 1;
    int *p = &k;
    cout<<"Before function value of k is :" << k <<endl;
    update(p);
    cout<<"After function value of k is :" << k <<endl; //  this will be  change in value
    // trying to update address of pointer which will be change but only in the scope of the function, here we are using pass by value. 
    cout<<"Address befor using function :"<<p<<endl;
    address_update(p);
    cout<<"Address After using function :"<<p<<endl; // No change
}
// size of ptr and variable , tricky question