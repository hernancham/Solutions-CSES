#include <bits/stdc++.h>

using namespace std;

int main()
{
	int64_t n, r = 1, a = 2, m = 1000000007;
	cin >> n;
	while (n > 0)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
		{
			r = (r * a) % m;
			n = (n - 1) / 2;
		}
		a = (a * a) % m;
	}
	cout << r;
	return 0;
}
