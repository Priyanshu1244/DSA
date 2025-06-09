#include<iostream>
#include<vector>


using namespace std;

int main(){

    // creating a vector
    vector<int> vec = {3, 5, 7, 9, 11, 15, 30};

    int size = vec.size(); // storing its size in a variable

    int n = 45; //target sum

    int i ,j;
    i = 0 ;
    j = size-1;
    int pairsum = 0;

    while (i<j)
    {
        pairsum = vec[i] + vec[j];

        if(pairsum == n){
            cout<<vec[i]<<" on index "<<i<<" and "<<vec[j]<<" on index "<<j<<" sum is equal to "<<n<<endl;
            return 0;
        }else if(pairsum < n){
            i++;
        }else if(pairsum > n){
            j--;
        }
    
    }                   

    return 0;
}