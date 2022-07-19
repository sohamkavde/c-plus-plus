#include <bits/stdc++.h>
using namespace std;
// find first and last occurence of given number and give output how many times that number occur in the given array
int find_occur(int arr[], int n, int k)
{
    int first = 0, last = n;
    int mid =(first+ last) / 2;
    int ans = -1;
    while (first <= last)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            last = mid - 1;
        }
        else if (arr[mid] < k)
        {
            first = mid + 1;
            
        }
        else
        {
            last = mid - 1;
        }
        mid = (first+ last) / 2;
    }
    return ans;
}

int last_occur(int arr[], int n, int k)
{
    int first = 0, last = n;
    int mid =(first+ last) / 2;
    int ans = -1;
    while (first <= last)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            first = mid+1;
        }
        else if (arr[mid] < k)
        {
            first = mid + 1;
            
        }
        else
        {
            last = mid - 1;
        }
        mid = (first+ last) / 2;
        
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Which number's occurrence, Do you want to search ?\n";
    int k;
    cin >> k;
    int first = find_occur(arr, n, k);
    int last = last_occur(arr, n, k);
    cout << "\nfirst " << first;
    cout << "\nlast " << last;
    cout<<"\nans: "<<last-first+1;
}