#include <bits/stdc++.h>

using namespace std;

void print_cad(string &cad, int &t, int n)
{
	if (n == t)
	{
		(cad[n] == '1') ? cad[n] = '0' : cad[n] = '1';
		cout << cad << endl;
	}
	else
	{
		print_cad(cad, t, n + 1);
		(cad[n] == '1') ? cad[n] = '0' : cad[n] = '1';
		cout << cad << endl;
		print_cad(cad, t, n + 1);
	}
}

int main()
{
	int n, m;
	cin >> n;
	m = n - 1;
	string cad;
	while (n--)
		cad += "0";
	cout << cad << endl;
	print_cad(cad, m, 0);
	return 0;
}
