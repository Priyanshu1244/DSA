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
    vector<int>productvec(size,1);


    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            if(i == j){
                continue;
            }
            productvec[i] *= vec[j];

        }

    }


    for (int i = 0; i < size; i++)
    {
        cout << productvec[i] << "  ";
    }
    cout << endl;
}