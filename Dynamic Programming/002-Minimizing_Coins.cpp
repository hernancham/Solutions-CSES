#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int contar(vector<int> &monedas, int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MAX;
    int aux = INT_MAX;
    for (auto c : monedas)
        aux = min(aux, contar(monedas, n - c) + 1);
    return aux;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> monedas(n);
    for (int i = 0; i < n; i++)
        cin >> monedas[i];
    cout << contar(monedas, x);

    return 0;
}