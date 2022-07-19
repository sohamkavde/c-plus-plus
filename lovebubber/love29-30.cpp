#include<bits/stdc++.h>
using namespace std;

#define PI 3.14 // macro
// inline function
inline int getResult(int& a , int& b){
    return (a>b)?a:b;
}

int funct(int a, int b = 9){
    return a*b;
}

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main(){
    // int r;
    // cin>>r;
    // float circle = PI * pow(r,2);
    // cout<<" Area of circle : "<<circle;

    //inline function
    // int a = 4;
    // int b = 5;
    // int ans = 0;

    // ans = getResult(a,b);// return 5
    // cout<<ans<<endl;

    // a = a+6;
    // b = b-3;
    // ans  = getResult(a,b); // return 10
    // cout<<"after: "<<ans<<endl;

    // default argument

    // int a = 7;
    // int ansd = funct(a);
    // cout<<"Before :"<< ansd <<endl;
    // ansd = funct(a,5);
    // cout<<"After :"<<ansd<<endl;

    //Counting
    int n;
    cin>>n;
    print(n);

}