//mergeSort
#include<bits/stdc++.h>
using namespace std;
// int ans = 0;
void Merge(int *arr,int s, int e){ // 5 6 2 3 
    int mid = s+(e-s)/2; //2
    int len1 = mid-s+1; //3
    int len2 = e-mid; //1

    int *first = new int[len1]; //5 6 2
    int *second = new int[len2]; //3

    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    int index1 = 0,index2 = 0;
    mainIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++] = first[index1++];
        }else{
            arr[mainIndex++] = second[index2++];
        }
    }
    
    while (index1<len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2<len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    
    delete []first;
    delete []second;
}

void MergeSort(int *arr, int s , int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    Merge(arr,s,e);
}
int main(){
    int n = 8;
    int arr[n] = {5,6,8,3,2,4,7,1};
    MergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}