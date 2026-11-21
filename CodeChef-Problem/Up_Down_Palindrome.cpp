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
        int l = 0, r = n - 1;
        string ans = "No";
        int increas_max = 0, reduce_min = 2e9;
        int flag = 0;
        while (l <= r)
        {
            if (v[l] != v[r])
            {
                int diff = abs(v[l] - v[r]);
                if (diff == 2)
                {
                    // yes hower posibility asa
                    if (v[l] > v[r])
                    {
                        reduce_min = min(reduce_min, v[l]);
                        increas_max = max(increas_max, v[r]);
                    }
                    else
                    {
                        reduce_min = min(reduce_min, v[r]);
                        increas_max = max(increas_max, v[l]);
                    }
                }
                // jodi difference 2 na hay
                else
                {
                    ans = "No";
                    flag = 1;
                    break;
                }
            }
            l++, r--;
        }
        if (flag == 0 && increas_max < reduce_min)
        {
            ans = "Yes";
        }
        cout << ans << endl;
    }

    return 0;
}