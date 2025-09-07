//find missing number in array

#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int missing(vector<int>&arr,int key){
    int sum=key*(key+1)/2;
    int actualsum=0;
    for(auto num: arr){
        actualsum+=num;
    }
    int missingnum=sum-actualsum;
    return missingnum;
}

int main(){
    vector<int> arr={1,2,3,5};
    int key=5;
    cout<<missing(arr,key);
}