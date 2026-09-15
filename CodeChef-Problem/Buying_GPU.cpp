#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (z <= y)
        {
            cout << "-1" << endl;
        }
        else
        {
            int new_price = x+y;
            int count = 0;
            int chef = 0;
            while(z != x)
            {
                if(x < z)
                {
                    count++;
                    chef += z;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}