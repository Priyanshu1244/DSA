#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr = {2, 2, 1, 1, 2, 2, 2};
    int size = arr.size();

    int freq = 0;
    int major;

    for (int i = 0; i < size-1 ; i++)
    {

        if (freq == 0)
        {
            major = arr[i];
        }

        if (major == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    cout << major;

    return 0;
}