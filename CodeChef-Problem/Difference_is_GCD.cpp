#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        long long int ans = 0;
        long long int lastval = 0;
        for(long long int i = 1;i <= sqrt(n);i++)
        {
            ans += (n/i) - 1;
            lastval = n/i;
        }
        for(long long int i = 1;i < lastval;i++)
        {
            long long int st = n/(i+1);
            long long  int ed = n/i;
            if(st < ed)
            {
                long long int ran = ed - st;
                ans += ran*(i-1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}