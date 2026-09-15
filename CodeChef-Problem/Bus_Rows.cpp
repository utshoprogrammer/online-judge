#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        int cur_row = 1;
        int total_set = m;

        while(total_set < x)
        {
            cur_row++;
            total_set += m;
        }
        int ans = min(cur_row,n-cur_row+1);
        cout << ans << endl;
    }
    return 0;
}