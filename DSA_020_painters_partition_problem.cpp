#include<iostream>
#include<vector>

using namespace std;

bool isvalid(vector<int>arr,int N,int M,int maxtimeallowed){
    int painters = 1 , time = 0;
    for(int i = 0 ; i<N ; i++){

        if(arr[i]>maxtimeallowed) return false;

        if(time + arr[i] <= maxtimeallowed){
            time += arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }

    return painters<=M;
}

int painter_partition(vector<int>arr,int N,int M){
    if(M>N) return -1;

    int start = 0 , end = 0 , ans = -1;
    for(int i = 0 ; i<N ; i++){
        end += arr[i];
    }

    while(start<=end){
        int mid = start + ((end - start)/2);
        if(isvalid(arr,N,M,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return ans;
}

int main(){

    vector<int>arr = {40,30,10,20};
    int N = arr.size();
    int M = 2;

    cout<<"maximum time a painter took is : "<<painter_partition(arr,N,M)<<endl;

    return 0;
}