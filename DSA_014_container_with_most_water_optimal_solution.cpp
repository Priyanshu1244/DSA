#include <iostream>
#include <vector>

using namespace std;

void mostwater(vector<int> height);

int main()
{

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7}; //container height array

    mostwater(height); //calling the funtion to get mostwater

    return 0;
}

void mostwater(vector<int> height) //function defination
{

    //declaring varibles
    int mostwater = INT32_MIN; 
    int size = height.size();

    int lp = 0;
    int rp = size - 1;
    int w, h;

    while (lp < rp) //two pointer approach loop 
    {

        w = rp - lp;
        h = min(height[lp], height[rp]);

        int area = w * h;

        mostwater = max(mostwater, area);

        if (height[lp] <= height[rp])
        {
            lp++;
        }
        else if (height[rp] <= height[lp])
        {
            rp--;
        }
    }

    cout << mostwater << endl;  //final answer
}