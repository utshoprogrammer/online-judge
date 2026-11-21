#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int need_coin = 0;
        int cupon = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cupon = max(cupon, v[i]);

            if (need_coin + v[i] - cupon <= k)
            {
                // buy korta parbo
                ans++;
                need_coin += v[i];
            }
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}