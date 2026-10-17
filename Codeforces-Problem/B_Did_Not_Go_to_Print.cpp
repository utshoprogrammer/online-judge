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
        int n; cin >> n;
        string s; cin >> s;

        stack<int> st;
        vector<int> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                st.push(i + 1);
            }
            else if (s[i] == '2')
            {
                if (!st.empty())
                {
                    ans.push_back(i + 1);
                    st.pop();
                }
            }
        }
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}