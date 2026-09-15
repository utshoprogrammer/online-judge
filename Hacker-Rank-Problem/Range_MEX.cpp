#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio ( false ) ; 
    cin.tie ( nullptr ) ;

    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (k--)
    {
        int l,r;
        cin >> l >> r;

        vector<int> v;

        for (int i = l; i <= r; i++)
        {
            v.push_back(a[i]);
        }

        sort(v.begin(),v.end());

        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            // if(l == r)
            // {
            //     break;
            // }
            if(v[i] == ans)
            {
                ans++;
            }
            else if(v[i] > ans)
            {
                break;
            }
        }
        cout << ans <<"\n";
        
    }
    

    return 0;
}