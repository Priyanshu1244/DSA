#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int target = 2;

    vector<int> arr = {1, 2, 2, 2, 2, 2, 2};
    int size = arr.size();

    int first, last = -1;

    for (int i = 0; i < size ; i++)
    {
        if (arr[i] == target)
        {
            first = i;
            for (int j = first; j < size ; j++)
            {
                if (arr[j] == target)
                {
                    last = j;
                }else{
                    break;
                }
            }

            if(last != -1){
                break;
            }

        }
    }
    
    cout << "first occur : " << first << endl;
    cout << "last occur : " << last << endl;

    return 0;
}