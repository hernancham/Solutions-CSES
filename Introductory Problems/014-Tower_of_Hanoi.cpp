#include <iostream>

using namespace std;

void hanoi(int n, int origen, int auxiliar, int destino)
{
    if (n == 1)
        cout << origen << " " << destino << endl;
    else
    {
        hanoi(n - 1, origen, destino, auxiliar);
        cout << origen << " " << destino << endl;
        hanoi(n - 1, auxiliar, origen, destino);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    hanoi(n, 1, 2, 3);
    return 0;
}
