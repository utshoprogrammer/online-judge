#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    s = "#" + s;
    int l = 1, r = 1;
    while (r <= n+1)
    {
        if (s[r] == 'R')
        {
            r++;
        }
        else
        {
            ans = max(ans, r-l);
            r++;
            l = r;
        }
    }
    cout << ans << endl;

    return 0;
}