#include <bits/stdc++.h>

using namespace std;

int main()
{
	string texto;
	cin >> texto;
	int n = 0, m = 0;
	char x = texto[0];
	for (int i = 0; i <= texto.size(); i++)
	{
		if (x != texto[i])
		{
			if (n < m)
				n = m;
			m = 0;
			x = texto[i];
		}
		m++;
	}
	cout << n;
	return 0;
}
