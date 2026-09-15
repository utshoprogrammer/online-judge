#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        cin >> x >> y >> z;
        
        int total_mark_dragon = a + b + c;
        int total_mark_sloth = x + y + z;

        if (total_mark_dragon > total_mark_sloth)
        {
            cout << "DRAGON" << endl;
        }
        else if (total_mark_dragon < total_mark_sloth)
        {
            cout << "SLOTH" << endl;
        }
        else
        {
            if (a > x)
            {
                cout << "DRAGON" << endl;
            }
            else if (a < x)
            {
                cout << "SLOTH" << endl;
            }
            else
            {
                if (b > y)
                {
                    cout << "DRAGON" << endl;
                }
                else if (b < y)
                {
                    cout << "SLOTH" << endl;
                }
                else
                {
                    if (c > z)
                    {
                        cout << "DRAGON" << endl;
                    }
                    else if (c < z)
                    {
                        cout << "SLOTH" << endl;
                    }
                    else
                    {
                        cout << "TIE" << endl;
                    }
                }
            }
        }
    }
    return 0;
}