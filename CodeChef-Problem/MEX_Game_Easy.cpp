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
        map<int,int> mp;
        for (auto val : v)
        {
            mp[val]++;
        }
        // mex finding 
        int mex = 0;
        while (mp[mex] > 0)
        {
            mex++;
        }
        //cout << mex << endl;
        int ans = 0;
        for(auto [x,c] : mp)
        {
            if(x < mex)
            {
                int duplicate = c - 1;
                ans += duplicate * x;
            }
            if(x > mex)
            {
                int update = mex + 1;
                int one_element = x - update;
                ans += one_element * c;
            }
        }
        if(ans % 2 == 1) cout << "Alice" <<'\n';
        else cout << "Bob" <<'\n';
        
    }

    return 0;
}