//count occurances 
#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int count(vector<int>&arr,int n,int key){
unordered_map<int ,int>mpp;
for(auto x: arr){
    mpp[x]++;

}
cout<<mpp[key]<<endl;

}

int main(){
    vector<int>arr={1,1,2,3,3,3,3,4,4};
    int key=3;
    count(arr,8,key);
}