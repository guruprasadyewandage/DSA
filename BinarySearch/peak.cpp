//peak index find
#include<iostream>
using namespace std;

int peakindex(int arr[],int n){
    int s=0;
    int e=n-1;

    int mid=(s+e)/2;

    while(s<=e)
    {
         mid=(s+e)/2;
         if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
         }
         if(arr[mid]>arr[mid-1]){
            s=mid+1;
        
        }
        else{
            e=mid-1;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={1,5,4,3,2,2,1};
    cout<<peakindex(arr,8);
}