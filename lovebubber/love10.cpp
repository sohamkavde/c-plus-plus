#include<bits/stdc++.h>
using namespace std;
// Print pair value which will going to form sum of given number k, like 1 2 3 is array and 3 is value of k so 1+2=3. (1,2) is pair  and answer
void find_pair_sum(int arr[],int  n, int k){
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(arr[i]);
    }
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j] == k){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
        
    }
    sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
        cout<<ans[i][j]<<" ";
            /* code */
        }
        cout<<endl;
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
    cout<<"Enter sum value\n";
    int k;
    cin>>k;
    find_pair_sum(arr,n,k);
    return 0;
}