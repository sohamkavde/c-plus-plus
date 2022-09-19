#include<bits/stdc++.h>
using namespace std;
// binary to decimal ========== *assuming binary as a number
int main(){
    int n;
    cin>>n;
    int weight = 1; int decimal = 0;
    while (n != 0)
    {
        int binary =n%10;
        decimal = decimal + binary*weight;
        n = n/10;
        weight = weight*2;
    }
    
    cout<<"the decimal number is :"<< decimal;
    return 0;

}