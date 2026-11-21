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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
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
        // operation
        for (int i = 0; i < n; i++)
        {
            // maximum value of the possible operation
            int mx = 0;
            for (int j = 1; j + 1 < n; j++)
            {
                if (v[j] < min(v[j - 1], v[j + 1]))
                {
                    mx = max(mx, v[j]);
                }
            }
            if (mx == 0)
            {
                // no possiblem operation
                break;
            }
            // used operation
            for (int k = 1; k + 1 < n; k++)
            {
                if (v[k] < min(v[k - 1], v[k + 1]) && v[k] == mx)
                {
                    v[k - 1] = v[k];
                    v[k + 1] = v[k];
                    break;
                }
            }
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        cout << sum << endl;
    }

    return 0;
}