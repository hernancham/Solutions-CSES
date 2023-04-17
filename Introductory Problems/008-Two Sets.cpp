#include <iostream>

using namespace std;

int main()
{
	int n, p, i;
	cin >> n;
	p = n / 4;
	switch (n % 4)
	{
	case 0:
		cout << "YES" << endl;
		cout << 2 * p << endl;
		for (i = 1; i <= p; i++)
			cout << i << " ";
		for (i = n - p + 1; i <= n; i++)
			cout << i << " ";
		cout << endl
			 << 2 * p << endl;
		for (i = p + 1; i <= n - p; i++)
			cout << i << " ";
		break;
	case 3:
		cout << "YES" << endl;
		cout << 2 * p + 2 << endl;
		cout << 1 << " " << 2 << " ";
		if (n > 3)
			for (i = 4; i <= p + 3; i++)
				cout << i << " ";
		for (i = n - p + 1; i <= n; i++)
			cout << i << " ";
		cout << endl
			 << 2 * p + 1 << endl;
		cout << 3 << " ";
		if (n > 3)
			for (i = p + 4; i <= n - p; i++)
				cout << i << " ";
		break;
	default:
		cout << "NO" << endl;
	}
	return 0;
}
