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
        vector<int> v(n+1);
        for(int i = 1;i <= n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        vector<int> pre(n+2);
        pre[1] = v[1];
        for(int i = 2;i <= n;i++)
        {
            pre[i] = pre[i-1] + v[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int k = pre[i]*(pre[i] - 1)/2;
            if(k <= m)
            {
                ans ++;
            }
            else{
                break;
            }       
        }
        cout << ans << endl;
        
    }

    return 0;
}