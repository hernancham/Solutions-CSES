#include <iostream>

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	if (n == 1)
	{
		cout << n;
		return 0;
	}
	if (n <= 3)
	{
		cout << "NO SOLUTION";
		return 0;
	}
	for (i = n - 1; i > 0; i -= 2)
	{
		cout << i << " ";
	}
	for (i = n; i > 0; i -= 2)
	{
		cout << i << " ";
	}
	return 0;
}
