#include <bits/stdc++.h>

using namespace std;

vector<int> value(1000);
vector<bool> ready(1000, 0);
vector<int> coins;

int solve(int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MAX;
    if (ready[n])
        return value[n];
    int best = INT_MAX;
    for (auto c : coins)
        best = min(best, solve(n - c));
    ready[n] = true;
    value[n] = best + 1;
    return best + 1;
}

int main()
{
    int n, x, m;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        coins.push_back(m);
    }
    cout << solve(x);
    return 0;
}