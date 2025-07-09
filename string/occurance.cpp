//remove all opccurances

#include<iostream>

using namespace std;

string removeOccurances(string s, string part){
    while(s.length()>0 && s.find(part)<s.size()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string s="daabcbaadcbc";
    string part="aa";
  cout<<removeOccurances(s, part);
}