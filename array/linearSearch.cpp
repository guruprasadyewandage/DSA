// linear search
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    for(int i=0; i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
     return false;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int key=4;
   cout<< linearSearch(arr, 7, key);
}