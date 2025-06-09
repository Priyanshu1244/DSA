#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> vec = {1,5,4,6,6,4,6,2,5,6,6,6,7,8,6,6,1,6,6,6};
    int size = vec.size();

    //using inbuilt sort function to sort array

    sort(vec.begin(),vec.end());


    int frequency = 1;
    for(int i = 1 ; i<size ; i++){

        if(vec[i]==vec[i-1]){
            frequency++;
        }else{
            frequency = 1;
        }

        if(frequency==size/2){
            cout<<"the majority element is : "<<vec[i]<<endl;
            return 0;
        }else{
            continue;
        }
       

    }

    return 0;
}