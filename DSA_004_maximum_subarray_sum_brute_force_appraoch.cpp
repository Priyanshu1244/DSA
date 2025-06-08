#include <iostream>
using namespace std;

int main()
{

    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};

    int maxsum = INT32_MIN ;
    for(int start = 0 ; start<n ; start++){
        
        int currentsum = 0;

        for(int end = start ; end<n ; end++){
            
            currentsum += arr[end];
            if(currentsum>maxsum){
                maxsum = currentsum;
            }

        }

    }

    cout<<maxsum;


    
    cout<<"\n\n-------------------------PROGRAM FINISHED------------------------\n";
    return 0;
}