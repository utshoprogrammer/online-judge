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
        for(int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        vector<int> a;
        vector<int> b;
        a = v;
        b = v;

        a.erase(max_element(a.begin(),a.end()));
        int max_f = *max_element(a.begin(),a.end());
        int min_f = *min_element(a.begin(),a.end());
        int ans = max_f - min_f;

        b.erase(min_element(b.begin(),b.end()));
        int mx = *max_element(b.begin(),b.end());
        int mn = *min_element(b.begin(),b.end());
        int ans2 = mx - mn;
        cout << min(ans,ans2) << endl;
        
    }

    return 0;
}