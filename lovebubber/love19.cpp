#include<bits/stdc++.h>
using namespace std;
// find the maximum in minimum element aisa hi kuch hint ke lie dia rahenga 
// arr[4] = {5,5,5,5}; painter(k) = 2; here 5,5,5,5 is board to paint
bool isPossible(int arr[],int n ,int k,int mid){
    int PainterCount = 1; 
    int boards = 0;
    for (int i = 0; i < n; i++)
    {
        if(boards+arr[i]<=mid){ // given array element is below mid
            boards  +=arr[i];            
        }else{
            PainterCount++;
            if(arr[i]>mid || PainterCount>k){ // array element is greater or painter is more than required so print false
                return false;
            }
            boards = arr[i]; // again initialising boards 
        }
    }
    return true;
}
void Painters_problem(int arr[],int n ,int k){
    int s= 0;
    int e = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        e +=arr[i]; // adding all values here , making search space
    }
    int mid =  s + (e-s)/2;
    while (s<=e)
    {
        if(isPossible(arr,n,k,mid)){ // check given value is posible or not
            ans = mid; // storing the value
            e = mid-1;
        }else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    cout<<ans;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k = 2;
    
    Painters_problem(arr,n,k);
}