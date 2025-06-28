#include<iostream>
#include<vector>
using namespace std;

int majorelement(vector<int> &arr){
    int ans=0;
    int freq=0;

    for(int i=0;i<arr.size();i++){
        if(freq==0){
            ans=arr[i];
        }
        if(arr[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
    }return ans;
}
int main(){
vector<int> arr={1,2,3,3,3,3,3,1,1};
int result= majorelement(arr);
cout<<result;

}
