#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        for (int i = 1; i <= 2024; i++)
        {
            if (k % 3 == 0 || k == 3)
            {
            }
            else if(k % 3 != 0 || k != 3)
            {
                cout << k << endl;
            }
        }
    }
    return 0;
}