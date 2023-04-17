#include <iostream>

using namespace std;

int main()
{
	int n;
	int64_t r;
	cin >> n;
	for (int64_t i = 1; i <= n; i++)
	{
		r = (i - 1) * (i + 4) * (i * i - 3 * i + 4) / 2;
		cout << r << endl;
	}
	return 0;
}
