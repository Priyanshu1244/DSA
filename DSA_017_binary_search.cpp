#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {-1,0,3,4,5,9,12};
    int size = 7;
    int target =  12;

    int st = 0;
    int end = size - 1;
    int mid =( st + end ) / 2;

    while(!(end<st)){

        if(arr[mid]==target){
            cout<<"target found of index : "<<mid<<endl;
            return 0;
        }else if(arr[mid]<target){
            st = mid+1;
            mid =( st + end ) / 2;
        }else{
            end = mid-1;
            mid =( st + end ) / 2;
        }
    }
    


    return 0;
}