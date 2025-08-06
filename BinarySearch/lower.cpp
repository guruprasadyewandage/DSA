//lower bound
#include<iostream>
using namespace std;

int lower(int arr[],int n,int key){
    int s=0;
    int end=n-1;
   int ans=0;

    while(s<=end){
         int mid=(s+end)/2;
    
        if(arr[mid]>=key){
            ans=mid;
            end=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
  
}

int main(){
    int arr[5]={3,5,8,15,19};
    int key=4;
    cout<<lower(arr,5,key);
}