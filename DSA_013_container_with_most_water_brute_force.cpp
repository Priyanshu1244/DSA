#include<iostream>
#include<vector>

using namespace std;

void mostwater(vector<int>height);

int main(){

    vector<int>height = {1,8,6,2,5,4,8,3,7};

    mostwater(height);
    

    return 0;
}

void mostwater(vector<int>height){

    int size = height.size();
    int mostwater = INT32_MIN;
    int length , breadth;
    for(int line1 = 0 ; line1<size ; line1++){
        for(int line2 = line1 + 1 ; line2<size ; line2++){
            length = min(height[line1], height[line2]);
            breadth = line2 - line1;

            if(length*breadth >= mostwater){
                mostwater = length*breadth;
            }
        }
    }

    cout<<mostwater;


}