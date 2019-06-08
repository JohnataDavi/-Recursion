#include <iostream>
#include <cmath>
using namespace std;

int potencia(int, int);

int main()
{
    int x=5, n=5;
    cout << potencia(x, n);
    return 0;
}

int potencia(int x, int n)
{
    return (n==0)? 1 : x*potencia(x, n-1);
}
