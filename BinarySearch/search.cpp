//search insert position

#include<iostream>
using namespace std;
int searchinsert(int arr[],int n,int key){

    int s=0;
    int e=n-1;
   while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
   }
   return s;
}


int main(){
    int arr[]={2,4,6,8};
    int key=7;
    cout<<searchinsert(arr,4,key);
}