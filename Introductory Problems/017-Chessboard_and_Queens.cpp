#include <iostream>

using namespace std;

string t[8];
bool h[8], d1[15], d2[15];
int cont;

void contar(int i)
{
    if (i == 8)
    {
        cont++;
        return;
    }
    for (int j = 0; j < 8; ++j)
    {
        if (h[j] || d1[i + j] || d2[i - j + 8] || t[i][j] == '*')
            continue;
        h[j] = d1[i + j] = d2[i - j + 8] = true;
        contar(i + 1);
        h[j] = d1[i + j] = d2[i - j + 8] = false;
    }
}

int main()
{

    for (int i = 0; i < 8; ++i)
        cin >> t[i];
    contar(0);
    cout << cont << endl;
    return 0;
}
