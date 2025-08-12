#include <iostream>
#include <vector>

using namespace std;

void arrayproduct(vector<int> vec);
int main()
{

    vector<int> vec = {1, 2, 3, 4};

    arrayproduct(vec);

    return 0;
}

void arrayproduct(vector<int> vec)
{
    int size = vec.size();
    vector<int> answer(size, 1);

    // storing the multiplication of previous numbers in answer vector
    for (int i = 1; i < size; i++)
    {
        answer[i] = answer[i - 1] * vec[i - 1];
    }

    // suffix
    int suffix = 1;
    for (int i = size - 2; i >= 0; i--)
    {
        suffix = suffix * vec[i + 1];
        answer[i] *= suffix;
    }

    for(int i = 0 ; i<size ; i++){
        cout<<answer[i]<<"  ";
    }

    cout << endl;
}