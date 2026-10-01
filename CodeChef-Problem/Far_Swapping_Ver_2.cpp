#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if(abs(v[j-1] - v[j]) > 1 && v[j-1] > v[j])
                {
                    swap(v[j-1],v[j]);
                    ans+=2;
                }
            }   
        } 
            
        cout << ans << endl;
    }

    return 0;
}