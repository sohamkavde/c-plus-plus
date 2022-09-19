#include<bits/stdc++.h>
using namespace std;
// 5 sorting algoriths at one place 
// selection sort , bubble sort , insertion sort , merge sort , quick sort

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void selection_sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        
    }
    
}

void bubble_sort(int arr[],int n,int counter){
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {           
            if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
            }           
                    
        }          
        counter++;
    }
    
}


void insertion_sort(int arr[] , int  n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (arr[j]>temp &&  j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;      
        
    }
    
}

void merge(int *arr,int s ,int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];
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

    int index1 =0;
    int index2 = 0;
    mainIndex = s;

    while (index1<len1 && index2<len2)
    {
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

void mergeSort(int *arr,int  s,int  e){
    if(s>=e){
        return;
    }

    int  mid = s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int partistion_index(int *arr,int s, int e){
    int pivot = arr[s];
    int cnt =0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<pivot){
            cnt++;
        }
    }

    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);
    int i = s,j=e;
    while (i<pivotIndex && pivotIndex<j)
    {
        while(arr[i]<=pivot){
            i++;;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && pivotIndex<j){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex; 
}

void Quicksort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int partision = partistion_index(arr,s,e);

    Quicksort(arr,s,partision-1);
    Quicksort(arr,partision+1,e);

}

int main(){
    int  n = 5;
    int  *arr = new int[n];

    arr[0] = 4;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 5;
    arr[4] = 1;

    // selection_sort(arr,n);
    // int counter = 1;
    // bubble_sort(arr,n,counter);
    // insertion_sort(arr,n);
    //mergeSort(arr,0,n-1);
    Quicksort(arr,0,n);
    print(arr,n);
    return 0;   
    
}