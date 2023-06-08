#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
	return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int main()
{
	string texto;
	cin >> texto;
	sort(texto.begin(), texto.end());
	char let = texto[0];
	int cont = 0, perm = fact(texto.size());
	for (int i = 0; i < texto.size(); i++)
	{
		if (texto[i] != let)
		{
			let = texto[i];
			perm /= fact(cont);
			cont = 0;
		}
		cont++;
	}
	cout << perm / fact(cont) << endl;
	do
	{
		cout << texto << endl;
	} while (next_permutation(texto.begin(), texto.end()));
	return 0;
}
