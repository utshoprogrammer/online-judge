#include<bits/stdc++.h>
using namespace std;
# define ll long long
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
         vector<pair<int,int>> ans;
         int l = 0, r = n-1;
         int midian = n/2;
         ans.push_back({1,n});
         bool flag = false;
         while(l < r)
         {
            if(v[l] > midian && v[l+1] > midian)
            {
                // first two value delete kora jay
                l += 2;
            }
            else if(v[r] > midian && v[r-1] > midian)
            {
                // last two value delete kora jay
                r -= 2;
            }
            else if(v[l] > midian && v[r] > midian)
            {
                // first one and last one delete kora jay
                l++,r--;
            }
            else{
                flag = true;
                break;
            }
            ans.push_back({l+1,r+1});
            midian--;
         }
         if(flag == true)
         {
            cout << -1 << endl;
         }
         else{
            reverse(ans.begin(),ans.end());
            for (auto [f,s] : ans)
            {
                cout << f <<" " << s <<endl;
            }
            
         }      
    }

    return 0;
}