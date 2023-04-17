#include <iostream>

using namespace std;

int main()
{
	int n, z = 0, f = 5;
	cin >> n;
	while (n >= f)
	{
		z += n / f;
		f *= 5;
	}
	cout << z;
	return 0;
}
