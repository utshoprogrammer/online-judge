#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] == v[i])
            {
                ans++;
            }
        }
        int pos = -1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] == -1)
            {
                pos = i;
                break;
            }
        }
        if (pos != -1)
        {
            int ok = 0;
            for (int i = pos + 1; i < n; i++)
            {
                if (v[i] - v[i - 1] == 1)
                {
                    ok = 1;
                    break;
                }
            }
            if (ok == 1)
            {
                cout << ans + 2 << endl;
                continue;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] == -1 || v[i] - v[i - 1] == 1)
            {
                ans++;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}