#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        set<pair<int, int>> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert({v[i], i});
        }
        int ans = 0;
        map<int, int> dead;
        while (st.size() > 0)
        {
            auto [val, indx] = *st.begin();
            st.erase(st.begin());
            if (dead[indx] > 0)
            {
                continue;
            }
            dead[indx]++;
            ans++;
            if (indx - 1 >= 0 && dead[indx - 1] == 0)
            {
                st.erase({v[indx - 1], indx - 1});
                v[indx-1]--;
                if(v[indx-1] <= 0)
                {
                    dead[indx-1]++;
                }
                else{
                    st.insert({v[indx-1],indx-1});
                }
            }
            if(indx+1 < n && dead[indx+1] == 0)
            {
                st.erase({v[indx+1],indx+1});
                v[indx+1]--;
                if(v[indx+1] <= 0 ) dead[indx+1]++;
                else{
                    st.insert({v[indx+1],indx+1});
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}