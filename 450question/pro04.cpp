#include<bits/stdc++.h>
using namespace std;
/// given array which consist of only 0,1,2 sort the array without using any sorting algo.
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	int c0 , c1 , c2;
	c0 = c1 = c2 = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]==0){
			c0++;//for  zero
		}else if(arr[i]==1){
			c1++;//for  one
		}else{
			c2++;// for two
		}
	}

	for (int i = 0; i < n; i++)
	{
		if(c0>i){
			cout<<0<<" ";
		}else if((c1+c0)>i){
			cout<<1<<" ";
		}else{
			cout<<2<<" ";
		}
	}
	
	
}