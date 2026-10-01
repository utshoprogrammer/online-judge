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
        vector<pair<int,int>> v(n);
        int count_z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
            if(v[i].first == 0) 
                count_z++;
        }
        sort(v.begin(),v.end());
        // no zero
        if(count_z == 0)
        {
            cout << "YES" << endl;
            string s(n,'A');
            cout << s << endl;
            continue;
        }

        if(count_z == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        string s(n,' ');
        s[v[0].second] = 'A';
        s[v[1].second] = 'B';

        for (int i = 2; i < n; i++)
        {
            if(v[i].first == 0)
            {
                s[v[i].second] = 'A';
            }
            else{
                s[v[i].second] = 'C';
            }
        }
        
        cout << s << endl;
        
    }

    return 0;
}