#include<bits/stdc++.h>
using namespace std;
string non_repeating(string str){
    unordered_map<char,int>count;
    queue<int>q;
    string output = "";

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        count[ch]++;
        q.push(ch);
        while (!q.empty())
        {
            if(count[q.front()]>1){
                q.pop();
            }else{
                output.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            output.push_back('#');
        }
        
    }
    return output;
    
}
int main(){
    string str = "abac";
    string output = non_repeating(str);
    cout<<output<<" ";
}