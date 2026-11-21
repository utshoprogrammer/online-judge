#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        map<int,int> cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }
        int ans = 0;
        for(auto [val,count] : cnt)
        {
            int cur_max = 0;
            if(count % 2 == 0) cur_max = count/2 ;
            else cur_max = count/2 +1;
            ans = max(ans,cur_max);
        }
        cout << ans << endl;
    }

    return 0;
}