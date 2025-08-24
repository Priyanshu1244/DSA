#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isvalid(vector<int>&arr,int N,int C,int maxdistanceallowed){
    int laststall = arr[0] , cows = 1;
    for(int i = 1 ; i<N ; i++){
        if(arr[i]-laststall>=maxdistanceallowed){
            cows++;
            laststall = arr[i];
        }
    }
    return cows>=C;
}

int maximum_minimum_distance(vector<int>&arr,int N,int C){

    if(C>N) return -1;

    sort(arr.begin(),arr.end());

    int start = 1;
    int end = arr[N-1]-arr[0];

    int ans = -1;
    while(start<=end){
        int mid = start + ((end - start)/2);
        
        if(isvalid(arr,N,C,mid)){
            ans=mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;

}

int main(){

    vector<int>arr = {1,2,8,4,9};
    int N = arr.size();
    int C = 3;

    cout <<"maximum distance between cows are : "<<maximum_minimum_distance(arr,N,C)<<endl;

    return 0;
}