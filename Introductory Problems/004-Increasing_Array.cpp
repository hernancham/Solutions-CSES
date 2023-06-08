#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int64_t x, y, z = 0;
	cin >> n >> x;
	for (int i = 1; i < n; i++)
	{
		cin >> y;
		(x <= y) ? x = y : z += x - y;
	}
	cout << z;
	return 0;
}
