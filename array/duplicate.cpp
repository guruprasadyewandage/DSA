//remove duplicates from array
#include<iostream>
#include<set>
using namespace std;

int removeDuplicates(int arr[],int n){
    set<int>set;
    for(int i=0; i<n;i++){
        set.insert(arr[i]);
    }
    int k=set.size();
    int j=0;
 
    for(int x: set){
        arr[j++]=x;
    }
    return k;
}

int main(){
int arr[]={1,2,2,2,3,3,4,4,5};
int k=removeDuplicates(arr,9);
for(int i=0; i<k; i++){
    cout<<arr[i];
}
}