#include<iostream>
using namespace std;
void three_big_number(int arr[],int n){
    if(n<3){
        cout<<"Invalid array !";
    }else{
        int first ,second , third;
        first  = second = third = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }else if(arr[i]>second){
            third = second;
            second = arr[i];
        }else if(arr[i]>third){
            third = arr[i];
        }
    }
        cout<<"Three largest number from  the array "<<first<<" " <<second<<" " << third;
    


    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    three_big_number(arr,n);

}