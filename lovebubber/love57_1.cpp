#include<bits/stdc++.h>
using namespace std;
//sample inputs - Find Max Rectangle in binary matrix
// 4
// 0 1 1 0
// 1 1 1 1
// 1 1 1 1
// 1 1 0 0
// 8
class Solution 
{
    private:
            vector<int> nextSmallestNumber(vector<int> s,int n){
            stack<int>k;
            k.push(-1);
            vector<int>ans(n);
            for (int i = n-1; i >= 0; i--)
            {
                int curr = s[i];
                while(k.top() != -1 && s[k.top()]>=curr){
                    k.pop();
                }
                ans[i] = k.top();
                k.push(i);
            }
            return ans;
        }

        vector<int> prevSmallestNumber(vector<int> s,int n){
            stack<int>k;
            k.push(-1);
            vector<int>ans(n);

            for (int i = 0; i <n; i++)
            {
                int curr = s[i];
                while(k.top() != -1 && s[k.top()]>=curr){
                    k.pop();
                }
                ans[i] = k.top();
                k.push(i);
            }
            return ans;
        }
        int largestRectangleArea(vector<int> &s){    
            int n = s.size();

            vector<int>next(n);
            next = nextSmallestNumber(s,n);
            vector<int>prev(n);
            prev = prevSmallestNumber(s,n);

            int NewArea = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                int  l = s[i];
                if(next[i] == -1){
                    next[i] = n;            
                }
                int  b = next[i]-prev[i]-1;

                int  area = l*b;
                NewArea = max(NewArea,area);
            }

            return NewArea;    
            
        }
    public:
        int celebrity(vector<vector<int> > M,int n){
            int area = largestRectangleArea(M[0]);
            for (int i = 1; i < n; i++)
            {
               for (int j = 0; j < n; j++)
               {
                
                    if(M[i][j] != 0){
                        M[i][j] = M[i][j] + M[i-1][j];
                    }
               }

               area = max(area,largestRectangleArea(M[i]));               
            }
            
        return area;
        }
};

int main()
{
   
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    
}

