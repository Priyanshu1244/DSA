#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = arr.size();

    int maxsum = INT32_MIN;
    int currentsum = 0;

    for(int i = 0 ; i<size-1 ; i++){
            
        currentsum += arr[i];

        maxsum = max(maxsum, currentsum);

        if(currentsum<0){
            currentsum = 0;
        }else{
            continue;
        }
    }

    cout<<maxsum;

    return 0;
}