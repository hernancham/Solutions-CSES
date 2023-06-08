#include <bits/stdc++.h>

using namespace std;

const int m = 7;
const int n = 7;
bool mtz[m][n];

int xf = 6;
int yf = 0;

int contar_rutas(string &txt, int x, int y, int pos)
{
    if (pos == m * n - 1)
        return (x == xf && y == yf);
    else if (x == xf && y == yf)
        return 0;

    if (mtz[x][y])
        return 0;

    bool arriba = true, abajo = true, izquierda = true, derecha = true;

    if (x - 1 >= 0)
        arriba = mtz[x - 1][y];
    if (x + 1 < m)
        abajo = mtz[x + 1][y];
    if (y - 1 >= 0)
        izquierda = mtz[x][y - 1];
    if (y + 1 < n)
        derecha = mtz[x][y + 1];

    if (!arriba && !abajo && izquierda && derecha)
        return 0;
    if (!izquierda && !derecha && arriba && abajo)
        return 0;

    if (x - 1 >= 0 && y + 1 < n && mtz[x - 1][y + 1] && !arriba && !derecha)
        return 0;
    if (x + 1 < m && y + 1 < n && mtz[x + 1][y + 1] && !abajo && !derecha)
        return 0;
    if (x - 1 >= 0 && y - 1 >= 0 && mtz[x - 1][y - 1] && !arriba && !izquierda)
        return 0;
    if (x + 1 < m && y - 1 >= 0 && mtz[x + 1][y - 1] && !abajo && !izquierda)
        return 0;

    mtz[x][y] = true;
    int rutas = 0;

    if (txt[pos] == '?')
    {
        if (x - 1 >= 0)
            rutas += contar_rutas(txt, x - 1, y, pos + 1);
        if (x + 1 < m)
            rutas += contar_rutas(txt, x + 1, y, pos + 1);
        if (y - 1 >= 0)
            rutas += contar_rutas(txt, x, y - 1, pos + 1);
        if (y + 1 < n)
            rutas += contar_rutas(txt, x, y + 1, pos + 1);
    }

    else if (txt[pos] == 'U' && x - 1 >= 0)
        rutas += contar_rutas(txt, x - 1, y, pos + 1);
    else if (txt[pos] == 'D' && x + 1 < m)
        rutas += contar_rutas(txt, x + 1, y, pos + 1);
    else if (txt[pos] == 'L' && y - 1 >= 0)
        rutas += contar_rutas(txt, x, y - 1, pos + 1);
    else if (txt[pos] == 'R' && y + 1 < n)
        rutas += contar_rutas(txt, x, y + 1, pos + 1);

    mtz[x][y] = false;

    return rutas;
}

int main()
{
    string txt;
    cin >> txt;
    cout << contar_rutas(txt, 0, 0, 0) << endl;
    return 0;
}
