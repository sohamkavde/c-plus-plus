#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool knows(vector<vector<int> >& M,int a,int b,int n){
        
        if(M[a][b] == 1){
            return 1;
        }else{
            return  0;
        }
    }
    
    int celebrity(vector<vector<int> >& M ,int n){
    
        stack<int>s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
    
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
    
            if(knows(M,a,b,n)){ // a know b so descard a push b
                s.push(b);
            }else{
                s.push(a);
            }
        }
    
        int ans = s.top();
        
        // count
        int rowcount = 0;
        for (int i = 0; i < n; i++)
        {
            if(M[ans][i] == 0){
                rowcount++;
            }
        }
       
        
        if(rowcount != n)
            return -1;
        
    
        int colcount = 0;
        for (int i = 0; i < n; i++)
        {
            if(M[i][ans] == 1){
                colcount++;
            }
        }
    
        // 
        if(colcount != n-1)
            return -1;
        
        return ans;
        
    }

   
};

//{ Driver Code Starts.

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

