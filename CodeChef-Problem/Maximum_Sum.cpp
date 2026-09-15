#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
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
        int rem = n - k;
        int ans = 0;

        for (int i = 0; i <= k; i++)
        {
            int sum = 0;
            for (int j = i; j < i + rem; j++)
            {
                sum += v[j];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}