#include<iostream>
#include<vector>
using namespace std;

int pow(int x,int n)
{
    int ans=1;
    while(n>0){
        if(n%2==1){
            ans = ans*x;
        }
        x*=x;
        n/=2;
    }
    return ans;
}

int main(){
    int n=5;
    int x=3;

    int result= pow(x,n);
    cout<<result;

}