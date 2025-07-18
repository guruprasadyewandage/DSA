//next greater element 1 (496)

#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>

using namespace std;

int main(){
    vector<int>num1={1,4,2};
    vector<int>num2={1,4,2,3};
    unordered_map<int,int>m;

    stack<int>s;
     for(int i= num2.size()-1;i>=0;i++){
        while(s.size()>0 && s.top()<num2[i]){
            s.pop();
        }

        if(s.empty()){
            m[num2[i]]=-1;
        }
        else{
            m[num2[i]]=s.top();
        }
        s.push(num2[i]);
     }
     
     vector<int>ans;

     for(int i=0; i<num1.size();i++){
        ans.push_back(m[num1[i]]);
     }

     for(int val: ans){
        cout<<val<<" ";
     }
     cout<<endl;
     return 0;
}