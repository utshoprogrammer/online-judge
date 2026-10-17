#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long int> value;
        map<long long int ,long long int> mp;
        for (int i = 0; i < n; i++)
        {
            if(i+2 < n && i+4<n)
            {
                long long int val = v[i]+v[i+2]-v[i+4];
                value.push_back(val);
                mp[val]++;
            }
        }
        // with overlapping 
        long long int ans = 0;
        for(auto [val,count] : mp)
        {
            long long int nc2 = count*(count-1)/2;
            ans += nc2;
        }
        // whithout overlapping 
        int m = value.size();
        for (int i = 0; i < m; i++)
        {
            if(i+2 < m && value[i] == value[i+2])
            {
                ans--;
            }
            if(i+4 < m && value[i] == value[i+4])
            {
                ans--;
            }
        }
        cout << ans << endl;
        
    }

    return 0;
}