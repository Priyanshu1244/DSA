#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> vec = {1, 5, 4, 6, 6, 4, 6, 2, 5, 6, 6, 6, 7, 8, 6, 6, 1, 6, 6, 6,10};
    int size = vec.size();

    int frequency = 0;
    int ans = vec[0];

    for(int i = 0 ; i<size  ; i++){
       
        if(frequency==0){
            ans = vec[i];
        }
        
        if(ans == vec[i]){
            frequency++;
        }else{
            frequency--;
        }

    }

    cout<<"the majority element in array is : "<<ans<<endl;  

    return 0;
}