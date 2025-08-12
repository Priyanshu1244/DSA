#include<iostream>
#include<vector>

using namespace std;

void maxprofit(vector<int>prices);

int main(){

    vector<int>prices = {7,1,5,3,6,4};

    maxprofit(prices);

    return 0;
}

void maxprofit(vector<int>prices){

    int size = prices.size();

    int bestbuy = prices[0];
    int bestsell;
    int maximumprofit = 0;

    for(int i = 0 ; i<size ; i++){
    
        if(bestbuy >= prices[i]){
            bestbuy = prices[i];
        }else if(bestbuy<prices[i]){
            
            if(prices[i]-bestbuy>maximumprofit){
                bestsell = prices[i];
            }
            maximumprofit = max(maximumprofit, prices[i]-bestbuy);
        }

        
    }

    cout<<bestbuy<<endl<<bestsell<<endl<<maximumprofit<<endl;
}