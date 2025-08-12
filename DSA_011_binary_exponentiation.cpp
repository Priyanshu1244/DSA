#include <iostream>
using namespace std;

double power(double x, int n);

int main()
{

    double number;
    int  exponent;
    cout << "enter number : ";
    cin >> number;
    cout << "enter exponenet : ";
    cin >> exponent;

    cout << power(number, exponent) << endl;
    return 0;
}

double power(double x, int n)
{

    if(n<0){
        n = -n;
        x = 1/x;
    }
    
   int bf = n;
   double ans = 1;

   while(bf>0){

    if(bf%2 == 1){
        ans *= x;
    }
    x*= x;

    bf/=2;

   }

    return ans;
}
