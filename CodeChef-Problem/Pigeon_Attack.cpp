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
        int n, k;
        cin >> n >> k;
        if (n < k)
        {
            cout << n << endl;
        }
        else
        {
            int time_count = 0;

            for (int i = 1; ;i++)
            {
                if(i % k == 0)
                {
                    continue;
                }
                time_count++;

                if(time_count == n)
                {
                    cout << i << endl;
                    break;
                }
            }                
        }
    }

    return 0;
}