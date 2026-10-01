#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            v[i] -= i;
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        long long int ans = 1, count = 1;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] - v[i - 1] == 1)
            {
                count++;
            }
            else
            {
                count = 1;
            }
            ans = max(ans, count);
        }
        cout << ans << endl;
    }

    return 0;
}