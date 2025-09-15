//find the second largest element and second smallest element
#include<iostream>
using namespace std;

int second_largestEle(int arr[],int n){
int small=INT8_MAX, second_smallest=INT8_MAX;
int large=INT8_MIN, second_largest=INT8_MIN;

for(int i=0; i<n; i++)
{
    small= min(small,arr[i]);
    large=max(large,arr[i]);
}

for(int i=0; i<n;i++){
    if(second_smallest>arr[i] && small!=arr[i]){
        second_smallest=arr[i];
    }
    if(second_largest<arr[i] && large!=arr[i]){
        second_largest=arr[i];
    }
}
cout<<"second largest element" <<second_largest<<endl;
cout<<"second smallest element" <<second_smallest;
}

int main(){
int arr[]={1,5,3,7,9,2};


second_largestEle(arr,6);
}