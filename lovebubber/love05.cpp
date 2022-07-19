#include <bits/stdc++.h>
using namespace std;
// return true if n is divided by 2^x
bool checkpresence(int n)
{
    if(n==1){
        return 0;
    }
    int m = 30;
    while (m--)
    {
        int po = pow(2, m);
        if (n == po)
        {
           return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    bool i = checkpresence(n);
    if(i){
        cout<<"present";
    }else{
        cout<<"Upsent";
    }
    return 0;
}