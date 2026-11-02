#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> mp;
    while(t--)
    {
        string s;
        cin >> s;
        auto it = mp.find(s);
        if (it == mp.end())
        {
            int id = mp.size() + 1;
            mp[s] = id;
            cout << id << '\n';
        }
        else
        {
            cout << it->second << '\n';
        }
    }

    return 0;
}