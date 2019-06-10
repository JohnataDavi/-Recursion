#include <iostream>
#include <cmath>
using namespace std;

int mdc(int, int);

int main()
{
    int n=200, m=75;
    cout << mdc(n, m);
    return 0;
}

int mdc(int n, int m)
{
    if(m<=n && n%m == 0)
        return m;
    if(n<m)
        return mdc(m, n);
    else
        return mdc(m, n%m);
}
