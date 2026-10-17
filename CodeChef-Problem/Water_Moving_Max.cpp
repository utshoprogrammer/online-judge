#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int> pre(n+1);
        pre[0] = v[0];
        for(int i = 1 ;i < n;i++)
        {
            pre[i] = pre[i-1] + v[i];
        }
        if(k >= n)
        {
            cout << pre[n-1] << endl;
        }
        else{
            cout << pre[k] << endl;
        }
    }

    return 0;
}