#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        while (m != 0)
        {
            cout << m/n << endl;
        }
        m -= m/n;
        
    }

    return 0;
}