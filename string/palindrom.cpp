
//valid palindrom
#include<iostream>
#include<cctype>
using namespace std;

bool isPalindrome(string str){
int st=0;
int end=str.size()-1;

while(st<end){
    if(!isalnum(str[st])){
        st++;
        continue;
    }
    if(!isalnum(str[end])){
        end--;
        continue;
    }

    if(tolower(str[st])!=tolower(str[end])){
        return false;
    }
    st++;
    end--;
}
return true;
}

int main(){
    string s="nitin";

    cout<<isPalindrome(s);

}