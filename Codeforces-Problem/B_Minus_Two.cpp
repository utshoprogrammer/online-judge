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
        int odd = 0,even4 = 0,even = 0;
        for(auto val : v)
        {
            if(val % 2 == 1) odd++;
            else{
                if(val % 4 == 0)
                {
                    even4++;
                }
                else{
                    even++;
                }
            }
        }
        cout << max({odd,even4,even}) << endl;
    }

    return 0;
}