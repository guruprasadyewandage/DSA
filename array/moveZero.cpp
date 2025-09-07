// move zero to end
#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZero(vector<int> arr, int n){
int st=0;
int end=n-1;
while (st<end)
{
    if(arr[st]==0){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    else{
        st++;
    }
}
// for(int i=0; i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
       return arr;
}

int main(){
    vector<int> arr={1,2,0,3,0,0,4};
    
   vector<int>ans= moveZero(arr,7);
   for(int x : ans){
    cout<<x<<" ";
   }
   return 0;
}