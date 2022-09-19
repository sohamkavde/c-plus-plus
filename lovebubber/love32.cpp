//Fibonacci series -Done
// ClimbStairs - Solved by the same method of Fibonacci series but How the answere is comming confused 
// this question  will use DP buy recursion only half  of the test cases are solved
//  https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10
//SayDigits
#include<bits/stdc++.h>
using namespace std;
// Fibonacci Series
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
     
     return fib(n-1)+fib(n-2);
}
//SayDigits
void SayDigit(string arr[],int n){
    if(n==0){
        return;
    }
    int digit = n%10;
    n = n/10;
    SayDigit(arr,n);
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cin>>n;
    int ans =  fib(n-1);
    cout<<"Ans :"<<ans<<endl;
    // string arr[10] = {"zeor","one","two","three","four","five","six","seven","eight","nine"};
    // int n;
    // cin>>n;
    // SayDigit(arr,n);
    return 0;
}