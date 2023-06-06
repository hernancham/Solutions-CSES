#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mapa;
    for (char c : s)
        mapa[c]++;
    int impares = 0;
    char impar;
    for (auto par : mapa)
    {
        if (par.second % 2 == 1)
        {
            impares++;
            impar = par.first;
        }
    }
    if (impares > 1)
        cout << "NO SOLUTION" << endl;
    else
    {
        string solucion;
        for (auto par : mapa)
            for (int i = 0; i < par.second / 2; i++)
                solucion += par.first;
        cout << solucion;
        if (impares == 1)
            cout << impar;
        for (int i = solucion.size() - 1; i >= 0; i--)
            cout << solucion[i];
        cout << endl;
    }
    return 0;
}
