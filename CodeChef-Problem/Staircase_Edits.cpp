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
        map<int,int> mp;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x-i]++;
            count = max(count,mp[x-i]);
        }
        cout << n - count << endl;
    }

    return 0;
}