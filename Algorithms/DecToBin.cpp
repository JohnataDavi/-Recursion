#include <iostream>
#include <cmath>
using namespace std;

int decToBin(int);

int main()
{
    int n;
    cin >> n;
    cout << endl;
    cout << decToBin(n);
    return 0;
}

int decToBin(int n)
{

    if(n == 1)
        return 1;
    else if(n==0)
        return 0;
    cout << n%2;
    decToBin(n/2);

}

