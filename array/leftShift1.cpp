//left shift array bye k places

#include<iostream>
using namespace std;

int leftShift(int arr[],int n, int k){
     k=k%n;
     int temp[n];
     for(int i=0; i<k;i++ )
     {
        temp[i]=arr[i];
     }

     for(int i=k; i<n;i++){
        arr[i-k]=arr[i];
     }
     int j=0;
     for(int i=n-k; i<n; i++){
        arr[i]=temp[j]; //or temp[i-(n-k)]
        j++;
     }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int k=2;
    leftShift(arr,7,k);
    return 0;
}