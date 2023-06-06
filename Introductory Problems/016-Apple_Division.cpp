#include <iostream>
#include <algorithm>

using namespace std;

int n;
int64_t manzanas[20];

int64_t solucion(int i, int64_t suma1, int64_t suma2)
{
    if (i == n)
        return abs(suma1 - suma2);
    return min(solucion(i + 1, suma1 + manzanas[i], suma2), solucion(i + 1, suma1, suma2 + manzanas[i]));
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> manzanas[i];
    cout << solucion(0, 0, 0) << endl;
    return 0;
}
