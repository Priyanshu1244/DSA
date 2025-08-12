#include<iostream>
using namespace std;

void reverse_array(int array[], int size);

int main(){

    int size = 16;
    int array[size] = {5,6,7,12,16,3,11,0,18,8,9,4,10,2,15,21};

    cout<<"original array : \n";
    for(int i = 0 ; i<size ; i++){
        cout<<array[i]<<"  ";
    }
    cout<<"\n\n";

    reverse_array(array,size);

    cout<<"reversed array : \n";
    for(int i = 0 ; i<size ; i++){
        cout<<array[i]<<"  ";
    }
    cout<<"\n\n";

    return 0;
}

void reverse_array(int array[], int size){

    
    int temp;
    for(int i = 0 ; i<size ; i++ ){

        size--;
        temp = array[i];
        array[i] = array[size];
        array[size] = temp;

    }
}
