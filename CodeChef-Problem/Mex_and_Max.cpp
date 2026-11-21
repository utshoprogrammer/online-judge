#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)      \
    for (auto &i : x) \
    cin >> i
#define output(x)     \
    for (auto &i : x) \
    cout << i << " "
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"

ll int mod = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        vector<ll int> p(n + 1, 1);
        for (int i = 1; i <= n; i++)
        {
            p[i] = p[i - 1] * 2 % mod;
        }
        vector<ll int> v(n + 1);
        for (int i = 0; i <= n; i++)
        {
            v[i] = (p[cnt[i]] - 1 + mod) % mod;
        }
        vector<ll int> pre(n + 2, 1);
        for (int i = 0; i <= n; i++)
        {
            pre[i + 1] = pre[i] * v[i] % mod;
        }
        ll int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            ans += pre[i + 1];
            if (i >= 1)
            {
                ans += pre[i - 1] * v[i] % mod;
            }
            ans %= mod;
        }
        cout << ans << endl;
    }

    return 0;
}