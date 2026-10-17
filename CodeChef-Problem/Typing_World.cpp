#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,m; cin >> n >> m;
        string s,t; cin >> s >> t;
        int l = 0, r = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(t.find(s[i]) == -1)
            {
                l++;
                r =0;
            }
            else{
                r++;
                l=0;
            }
            ans = max(ans,l);
            ans = max(ans,r);
        }
        cout << ans << endl;
    }

    return 0;
}