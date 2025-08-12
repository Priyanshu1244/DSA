#include<iostream>
using namespace std;

int BS(int arr[],int target,int st,int end);

int main(){
    
    int arr[] = {-1,0,3,4,5,9,12};
    int size = 7;
    int target =  5;

    int st = 0;
    int end = size-1;
    cout<<BS(arr,target,st,end)<<endl;
    
    return 0;
}

int BS(int arr[],int target,int st,int end){
    
    if(end<st)
    return -1;

    int mid = st + ((end-st)/2);

    if(arr[mid]<target){
        return BS(arr,target,mid+1,end);
    }else if(arr[mid]>target){
        return BS(arr,target,st,mid-1);
    }else{
        return mid;
    }

}