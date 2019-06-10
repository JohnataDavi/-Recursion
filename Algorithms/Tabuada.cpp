#include <iostream>
#include <cmath>
using namespace std;

int tabuada(int, int);

int main()
{
    int x=2, cont =1;
    tabuada(x, cont);
    return 0;
}

int tabuada(int n, int cont)
{
    if(cont < 11)
    {
        cout << n*cont << endl;
        tabuada(n, cont+1);
    }
}

