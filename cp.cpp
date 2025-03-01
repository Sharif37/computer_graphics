#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int MAX = 2e6 + 1;

vector<int> fact(MAX), inv_fact(MAX);

int mod_pow(int x, int y, int mod)
{
    int res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y % 2 == 1)
            res = res * x % mod;
        x = x * x % mod;
        y /= 2;
    }
    return res;
}

void precompute()
{
    fact[0] = 1;
    for (int i = 1; i < MAX; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[MAX - 1] = mod_pow(fact[MAX - 1], MOD - 2, MOD);
    for (int i = MAX - 2; i >= 0; i--)
    {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;
    return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}

signed main()
{

    precompute();

    int n, m ;

    cin >> n >> m ;

    int ans = nCr(n + 2 * m - 1, 2 * m) ;
    cout << ans << endl;
    return 0;
}
