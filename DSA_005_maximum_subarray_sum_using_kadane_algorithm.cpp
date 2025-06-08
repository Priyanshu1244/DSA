#include<iostream>
using namespace std;

int main(){

    int n = 7 ;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};

    int maxsum = INT32_MIN;    
    int currentsum = 0; 

    for(int i = 0 ; i<n ; i++){

        currentsum += arr[i];

        maxsum = max(currentsum , maxsum);

        if(currentsum < 0 ){
            currentsum = 0 ;
        }



    }


    cout<<maxsum;


    return 0;
}
