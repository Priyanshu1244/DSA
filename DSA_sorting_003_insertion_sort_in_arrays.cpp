#include<iostream>
#include<vector>

using namespace std;

void insertionsort(vector<int>&arr){
    int n = arr.size();
    int current , previous;
    for(int i = 1; i<n ; i++){
        current = arr[i];
        previous = i-1;
        while(previous>=0 && current<arr[previous]){
            arr[previous+1] = arr[previous];
            previous--;
        }
        arr[previous+1]=current;
    }
}

int main(){
    vector<int>arr = {1,4,5,2,8,7,0,6,12};

    //original array
    for(int nums : arr){
        cout<<nums<<" ";
    }
    cout<<endl;

    insertionsort(arr);  //insertion sort function

    //sorted array
    for(int nums : arr){
        cout<<nums<<" ";
    }
    cout<<endl;

    return 0;
}