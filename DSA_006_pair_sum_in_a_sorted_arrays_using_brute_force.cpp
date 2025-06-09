#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {3,5,7,30,9,11,15};

    int size = vec.size();
    int n = 45;


    for(int i = 0 ; i<size ; i++){
        int sum = 0;
        for(int j = i+1  ; j<size ; j++){
            sum = vec[i] + vec[j];

            if(sum == n){
                cout<<vec[i]<<" on index "<<i<<" and "<<vec[j]<<" on index "<<j<<" sum is equal to "<<n<<"\n";
                exit(0);
            }else{
                continue;
            }
        }
    }

    cout<<"no such pair is found\n";

    return 0;
}