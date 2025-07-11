//string compression

#include<iostream>
#include<vector>
using namespace std;

int compression(vector<char>&chars){
    int idx=0;
    
    

    for(int i=0; i<chars.size();i++){
         char ch = chars[i];
         int count=0;
        while(i<chars.size() && chars[i]==ch){
            count++;
            i++;
        }

        if (count==1)
        {
            chars[idx++]=ch;
            
        }

        else{
            chars[idx++]=ch;
            string str=to_string(count);
            for(char digit : str){
                chars[ idx++]=digit;
            }
            i--;
        }
        
    }
    return idx;
}

int main(){
   vector<char> chars ={'a','a','b','b','c','c','c'};
    int newL=compression(chars);
    cout << "Compressed array: ";
    for (int i = 0; i <newL ; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}