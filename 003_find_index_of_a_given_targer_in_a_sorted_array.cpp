#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int target = 13;

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = arr.size();

    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = (left+right)/2;

        if (arr[mid] == target)
        {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] < target)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }

    cout << "target is not present in array\n";

    return 0;
}