#include<iostream>
using namespace std;

void linearsearch(int array[],int size, int target);

int main(){

    int size = 15;
    int array[size] = {5,6,7,12,16,3,11,0,18,8,9,4,10,2,15};

    int target;
    cout<< "enter the number you want to find in array : ";
    cin>>target;

    linearsearch(array,size,target);

    return 0;
}

void linearsearch(int array[],int size, int target){

int found = 0;
    for(int i = 1 ; i<size ; i++){
        if(target == array[i]){
            cout<<"the given number is on "<<i<<" index of array\n";
         found = 1;
        }
    }

    if(found == 0){
        cout<<"the given number doesn't matches the vlaue on any index of array\n";
    }


}