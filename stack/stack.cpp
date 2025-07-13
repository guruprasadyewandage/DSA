//stack using stl

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> str;

    str.push(10);
    str.push(20);
    str.push(30);


    while(!str.empty()){
        cout<<str.top()<<" ";
        str.pop();
    }
    return 0;
}