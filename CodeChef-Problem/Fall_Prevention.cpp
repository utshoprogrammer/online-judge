#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> pre(n+1);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i-1] + v[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(pre[i] < 0)
            {
                count++;
            }
            // cout << pre[i] << " ";
        }
        // cout << endl;

        if(count <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    

    return 0;
}