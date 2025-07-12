//stack using vector

#include<iostream>
#include<vector>

using namespace std;

class stack {
vector<int>nums;

public:
void push(int val){
    nums.push_back(val);
}

void pop(){
nums.pop_back();
}

int top(){
return nums[nums.size()-1];
}

bool empty(){
if(nums.size()==0){
    return true;
}
else{
    return false;
}
}
};

int main(){
   stack s;
    s.push(80);
    s.push(20);
    s.push(10);
    s.push(90);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;

}