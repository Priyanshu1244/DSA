#include<iostream>
#include<vector>

using namespace std;

bool isvalid(vector<int>arr,int books,int students,int mid){
    int stud = 1 , pages = 0;

    for(int i = 0 ; i<books ; i++){

        if(arr[i]>mid) return false;

        if(pages + arr[i] <= mid){
            pages+=arr[i];
        }else{
            stud++;
            pages = arr[i];
        }
    }

    printf("hello how are you?");
    return stud>students ? false : true;
    
}


int book_allocation(vector<int>arr,int books,int students){

    if(students>books){
        return -1;
    }
    int sum = 0;
    for(int i = 0 ; i<books ; i++){
        sum += arr[i];
    }

    int start = 0 , end = sum;
    int ans = -1;
    while(start<=end){
       int mid = start + (end - start)/2;

       if(isvalid(arr,books,students,mid)){
        ans = mid;
        end = mid - 1;
       }else{
        start = mid + 1;
       }
    }

    return ans;
}

int main(){

    vector<int>arr = {2,1,3,4};
    int books = arr.size();
    int students = 2;

    cout<<"maximum pages a student got is : "<<book_allocation(arr,books,students)<<endl;

    return 0;
} 