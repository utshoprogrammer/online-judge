#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(s[0] == '1')
        {
            int ans = 0;
            for (int i = 1; i < n; i++)
            {
                if(s[i] == '0')
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else 
        {
            vector<int> prefixsum(n+1),sufixsum(n+2);

            for(int i = 1;i < n;i++)
            {
                prefixsum[i] += prefixsum[i-1];
                if(s[i] == '1') prefixsum[i]++;
            }

            for (int i = n-1; i >= 0; i--)
            {
                sufixsum[i] += sufixsum[i+1];
                if(s[i] == '0') sufixsum[i]++;
            }

            int ans = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int current = prefixsum[i] + sufixsum[i+1];
                ans = min(ans,current);
            }
            
            cout << ans << endl;
        }
        
       
    }

    return 0;
}