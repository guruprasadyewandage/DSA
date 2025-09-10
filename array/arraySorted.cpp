//check array is sorted or not
#include<iostream>
using namespace std;
int arraySorted(int arr[],int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,3,4,5};
   cout<<arraySorted(arr,5);
}