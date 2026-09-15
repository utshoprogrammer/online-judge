#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n > k)
        {
            cout << k << endl;
        }
        else if (n == k)
        {
            cout << k << endl;
        }
        else
        {
            // if ((k / n) % 2 == 1)
            // {
                int total_card = pow(n, 2);
                cout << total_card + 1 << endl;
            // }
            // else if ((k / n) % 2 == 0)
            // {. এভাবে সব K কার্ড শেষ না হওয়া পর্যন্ত
            //     int total_card = pow(n, 2);
            //     cout << total_card << endl;
            // }
        }
    }
    return 0;
}