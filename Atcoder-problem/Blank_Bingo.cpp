#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
    }
    int ans = 5;
    for (int i = 0; i < 5; i++)
    {
        int rowcount = 0, colcount = 0;
        for (int j = 0; j < 5; j++)
        {
            if (s[i][j] == '.')
            {
                rowcount++;
            }
            if (s[j][i] == '.')
            {
                colcount++;
            }
        }
        ans = min({ans, rowcount, colcount});
    }
    int d1 = 0, d2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i][i] == '.')
            d1++;
        if (s[i][4 - i] == '.')
            d2++;
    }

    cout << min({ans, d1, d2}) << endl;

    return 0;
}