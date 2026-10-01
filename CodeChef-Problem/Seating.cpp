#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,m,k; cin >> n >> m >> k;

        map<int,int> mp;
        for (int i = 0; i < m; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        for (int i = 1; i <= n; i++)
        {
            mp[i]++;
        }
        int count = 0;
        for (auto val : mp)
        {
            if(count == k)
            {
                break;
            }
            if(val.second == 1)
            {
                cout << val.first <<" ";
                count++;
            }
        }
        cout << endl;   
        
    }

    return 0;
}