#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            if(i <= k) ans = (ans * i) % 998244353;
            else ans = (ans * k) % 998244353;
        }
        cout << ans << endl;
       
    }

    return 0;
}