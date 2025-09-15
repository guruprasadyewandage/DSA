//largest element find
// brute force approch that is sort the array and the last element should be largest element
//this is better approch
#include<iostream>
using namespace std;

int largestElement(int arr[], int n){
    int largest = arr[0];
    for(int i =0; i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[] ={1,4,2,3,5};

    cout<<largestElement(arr ,5);
}