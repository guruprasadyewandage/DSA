//left shift array by one place

#include<iostream>
using namespace std;

int leftShift(int arr[],int n){
int temp= arr[0];
for(int i=0; i<n; i++){
arr[i]=arr[i+1];
}
arr[n-1]=temp;

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    leftShift(arr, 6);
}