#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> diff(n+1);
        for (int i = 0; i < n; i++)
        {
            if(v[i] > 0)
            {
                int l = i - v[i] + 1;
                if(l < 0)
                {
                    l = 0;
                }
                int r = i + v[i] - 1;
                if(r > n-1) 
                {
                    r = n-1;
                }

                diff[l]++;
                diff[r+1]--;
            }
        }
        // prefix sum

        for (int i = 1; i <= n; i++)
        {
            diff[i] += diff[i-1];
        }
        
        string ans(n,' ');
        for (int i = 0; i < n; i++)
        {
            if(diff[i] > 0) ans[i] = '0';
            else ans[i] = '1'; 
        }

        // check correctness
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            if(v[i] >= 0)
            {
                bool acha = false;
                int l = i - v[i];
                int r = i + v[i];

                if(l >= 0 && ans[l] == '1') acha = true; // left
                if(r <= n-1 && ans[r] == '1') acha = true; // right

                if(acha == false)
                {
                    f = false;
                    break;
                }
            }
        }
        if(f) cout << ans << endl;
        else cout << -1 << endl;
        
        
    }

    return 0;
}