// return consicutive ones

#include<iostream>
#include<vector>

using namespace std;

int solutions(vector<int> &nums){
int cnt=0;
int maxi=0;

for(int i=0; i<nums.size()-1;i++){
    if(nums[i]==1){
        cnt++;
    }
    else{
        cnt=0;
    }
    maxi=max(maxi,cnt);
}
return maxi;
}

int main(){
    vector<int>nums={1,0,1,4,6,7,0,1,1,0,1,1,0};
    cout<<solutions(nums);
}