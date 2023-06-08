#include <bits/stdc++.h>

using namespace std;

int main()
{
	int64_t q = 10, k, dig, pot_10, piv;
	string tex;
	cin >> q;
	while (q--)
	{
		cin >> k;
		dig = pot_10 = 1;
		piv = 9;
		while (k > piv)
		{
			k -= piv;
			pot_10 *= 10;
			piv = pot_10 * 9 * (++dig);
		}
		k--;
		tex = to_string(pot_10 + (k / dig));
		cout << tex[k % dig] << endl;
	}
	return 0;
}
