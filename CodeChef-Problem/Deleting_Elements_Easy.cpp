#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long int ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long int sum = 0;
            long long int mx = 0;
            // ans += 1;
            for (int j = i; j < n; j++)
            {
                sum += a[j];
                if(j > i+1)
                    mx = max(mx,a[j-1]);

                int len = j - i + 1;
                if (len <= 2 || sum >= 2 * mx)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}