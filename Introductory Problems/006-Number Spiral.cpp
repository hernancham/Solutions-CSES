#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int64_t X, Y, v;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> Y >> X;
		if (Y < X)
			(X % 2 == 1) ? v = X *X - Y + 1 : v = (X - 1) * (X - 1) + Y;
		else
			(Y % 2 == 0) ? v = Y *Y - X + 1 : v = (Y - 1) * (Y - 1) + X;
		cout << v << endl;
	}
	return 0;
}
