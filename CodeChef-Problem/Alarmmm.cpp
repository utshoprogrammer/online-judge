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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int i = n - 1;
        int ans = 0;
        while (i >= 0)
        {
            if (s[i] == '1')
            {
                int indx = max(0, (i - k));
                ans++;
                i = indx;
                i--;
            }
            else
            {
                i--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}