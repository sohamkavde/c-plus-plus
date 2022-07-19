#include<bits/stdc++.h>
using namespace std;
vector<string>dictWords(string textInput){
    vector<string>ans;
    string output = "";
    set<string>s;
    for (int i = 0; i < textInput.length(); i++)
    {
        if(textInput[i] != ' '){
            output.push_back(textInput[i]);
        }else{
            ans.push_back(output);
            s.insert(output);
            output ="";
        }    
}
//    if(ans.size() == s.size()){
//         ans.clear();
//         return ans;
//    }
    int coutt = 0;
    vector<string>ans2;
    for(auto it=s.begin();it!=s.end();it++){
        for (int k = 0; k < ans.size(); k++)
        {
            if( *it == ans[k]){
                coutt++;
                if(coutt>1){
                    ans2.push_back(ans[k]);
                    // cout<<ans[k]<<endl;
                }
                           
            }
        } 
        coutt =0;       
    }
    
   
    
    


    return ans2;
}
int main(){
   string textInput;
   getline(cin,textInput);
   vector<string>result= dictWords(textInput);
   for (int i = 0; i < result.size(); i++)
   {
            cout<<result[i]<<" ";
   }
   cout<< result[result.size()-1];
   return 0;
   
}