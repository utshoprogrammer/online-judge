#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n;i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for(int i = 1;i <= n;i++)
    {
        if(i%2 == 1)
        {
            ans += v[i];
        }
    }
    cout << ans << endl;
    return 0;
}