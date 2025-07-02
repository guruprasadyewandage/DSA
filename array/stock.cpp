#include<iostream>
#include<vector>

using namespace std;

int stock(vector<int> &price){
    int bestbuy=price[0];
    int maxprofit = 0;
    
    for(int i=1; i<price.size(); i++){
        if(price[i]>bestbuy){
            maxprofit=max(maxprofit, price[i]-bestbuy);
        }
        bestbuy=min(price[i],bestbuy);
    }
return maxprofit;
}

int main(){
    vector<int> price={7,1,5,3,6,4};
     

    int result=stock(price);
    cout<<result;

}