#include<bits/stdc++.h>
using namespace std;
// Refrence Variable 
void update_wr(int i){
     i = i+1;
}
void update(int& i){ // reference variable
     i = i+1;   
}
int main(){
    int i = 5; // local Variable
    int& j = i; // Refrence Variable
    cout<<"value i :"<<i<<" value j :"<<j<<endl;
    cout<<"After-------------"<<endl;
    j = j +1; // Now whether I change in i or j it will reflect on both variable 
    //  Why - because both variable refer to same memory space
    cout<<"value i :"<<i<<" value j :"<<j<<endl; // i=j=6
    //In Function 
    update_wr(i);// wr = without reference variable
    cout<< i <<endl; //Output i = 6 without reference variable
    update(i);
    cout<< i <<endl; // Output i =7 with reference variable
}