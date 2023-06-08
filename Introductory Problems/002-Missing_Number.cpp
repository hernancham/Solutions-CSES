#include <bits/stdc++.h>

using namespace std;

int main()
{
	int64_t a, b = 0, n, p, r;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		cin >> p;
		b += p;
	}
	a = (n * (n + 1)) / 2;
	r = a - b;
	cout << r << endl;
	return 0;
}
