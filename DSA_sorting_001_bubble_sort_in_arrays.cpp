#include<iostream>
#include<vector>

using namespace std;

void bubblesort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0 ; i<n-1 ; i++){
        bool swapped = false;
        for(int j = 0  ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) return;
    }
}

int main(){
    vector<int>arr = {1,4,5,2,8,7,0,6,12};

    //original array
    for(int nums : arr){
        cout<<nums<<" ";
    }
    cout<<endl;

    bubblesort(arr);  //bubble sort function

    //sorted array
    for(int nums : arr){
        cout<<nums<<" ";
    }
    cout<<endl;

    return 0;
}