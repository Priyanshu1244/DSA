#include<iostream>
#include<vector>

using namespace std;

void selectionsort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0 ; i<n-1 ; i++){
        int current = i;
        for(int j =i+1 ; j<n ; j++){
            if(arr[current]>arr[j]) current = j;
        }
        swap(arr[i],arr[current]);
    }
}

int main(){
    vector<int>arr = {1,4,5,2,8,7,0,6,12};

    //original array
    for(int nums : arr){
        cout<<nums<<" ";
    }
    cout<<endl;

    selectionsort(arr);  //selection sort function

    //sorted array
    for(int nums : arr){
        cout<<nums<<" ";
    }
    cout<<endl;

    return 0;
}