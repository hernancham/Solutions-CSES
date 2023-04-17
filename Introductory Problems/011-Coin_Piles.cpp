#include <iostream>

using namespace std;

int main()
{
	int t;
	int64_t a, b;
	cin >> t;
	string r;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		r = ((a + b) % 3 != 0 || a > 2 * b || b > 2 * a) ? "NO" : "YES";
		cout << r << endl;
	}
	return 0;
}
