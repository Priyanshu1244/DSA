#include<iostream>
using namespace std;

int main(){

    //creating arr with size n , where n = 5
    int n = 5;
    int arr[n] = {1 ,2 ,3 ,4 ,5 };


    //printing all the subarrays using loops
    cout<<"The possible subarrays are : \n";
   
    for(int size = n ; size>0 ; size--){

        for(int start = 0 ; start<=n-size ; start++){

            for(int i = start ; i<size+start ; i++){

                cout<<arr[i];
            }

            cout<<"   ";
        }
        cout<<endl;
    }


    cout<<"\n\n----------------------------PROGRAM FINISHED----------------------------------------\n";
    return 0;
}