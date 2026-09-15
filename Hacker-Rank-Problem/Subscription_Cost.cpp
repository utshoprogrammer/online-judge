#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (n < 3)
        {
            cout << n * x << endl;
        }
        else
        {
            int first_three = 3 * x;
            int any_time = (n - 3) * y;
            cout << first_three + any_time << endl;
        }
    }
    return 0;
}