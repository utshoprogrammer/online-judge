#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x >= y)
        {
            for (int i = 0; i < (x + y + z); i++)
            {
                cout << "P";
            }
        }
        else if (y >= z)
        {
            for (int i = 0; i < (x + y + z); i++)
            {
                cout << "R";
            }
        }
        else
        {
            for (int i = 0; i < (x + y + z); i++)
            {
                cout << "S";
            }
        }
        cout << endl;
    }

    return 0;
}