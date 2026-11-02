#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,s; cin >> n >> s;
        int ans = INT_MAX;
        if(s == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if(n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        for(int i = 1;i <= n;i++)
        {
            int k = i*4;
            if(k >= s)
            {
                ans = min(ans,i+(k-s));
            }
        }
        if(ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}