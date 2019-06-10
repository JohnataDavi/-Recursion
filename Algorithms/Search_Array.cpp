#include <iostream>
#include <cmath>
using namespace std;

int buscar(int [], int, int);

int main()
{
    int vet[] = {3, 1, 4, 6, 7 ,9};
    int n=6, x=0;
    cout << buscar(vet, x, n);
    return 0;
}

int buscar(int vet[], int x, int n)
{
    if(vet[x] == n) return x;
    x++;
    buscar(vet, x, n);
}

