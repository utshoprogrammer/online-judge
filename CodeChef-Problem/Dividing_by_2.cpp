#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int ans = 0;
        while(v[0] != v[n-1])
        {
            v[n-1] = v[n-1]/2;
            ans++;
            sort(v.begin(),v.end());
        }
        cout << ans << endl;
          
    }
    return 0;
}