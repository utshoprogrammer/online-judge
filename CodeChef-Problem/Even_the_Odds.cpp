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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int odd = 0;
            for (int j = i; j < n; j++)
            {
                if (v[j] % 2 == 1)
                    odd++;
                if (odd % 2 == 0)
                {
                    ans = max(j - i + 1, ans);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}