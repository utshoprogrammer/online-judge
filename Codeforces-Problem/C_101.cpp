#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }

        int f_minus_one = n + 1, l_minus_one = -1;
        int f_one = n + 1, l_one = -1;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
            {
                f_minus_one = min(f_minus_one, i);
                l_minus_one = max(l_minus_one, i);
            }
            if(v[i] == 1)
            {
                f_one = min(f_one, i);
                l_one = max(l_one, i);
            }
        }

        if(l_minus_one != n+1 && f_minus_one < f_one)
        {
            v[f_minus_one] = 1;
        }
        if(l_minus_one != -1 && l_minus_one > l_one)
        {
            v[l_minus_one] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            if(v[i] == -1)
            {
                v[i] = 0;
            }
        }

        for(auto val : v)
        {
            cout << val <<" ";
        }
        cout << endl;
        
    }

    return 0;
}