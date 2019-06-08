#include <iostream>
using namespace std;

int outputNumbers(int);

int main()
{
    int n=1;
    outputNumbers(n);
    return 0;
}

int outputNumbers(int n)
{
    if(n<101)
    {
        cout << n << endl;
        outputNumbers(n+1);
    }
}
