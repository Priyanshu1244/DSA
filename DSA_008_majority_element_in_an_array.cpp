#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3, 1, 1, 3, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3};  // declearing array
    int size = vec.size();  //storing array size in a variable

    for (int i = 0; i < size; i++)   //running loop to check for majority element
    {
        int count = 0;
        for (int j = i; j < size; j++)
        {
            if (vec[i] == vec[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            cout << "majority element is : " << vec[i] << endl;   //printing the majority element
            exit(0);
        }
    }

    return 0;
}