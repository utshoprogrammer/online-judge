#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int last = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                last = i;
                break;
            }
        }
        if (last == -1 || last == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < last; i++)
            {
                if (s[i] == '1')
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}