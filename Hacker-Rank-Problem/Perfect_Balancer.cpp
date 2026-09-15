#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(n + 1);
    pre[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    vector<long long int> suf(n + 1);
    suf[n] = v[n];

    for (int i = n - 1; i >= 1; i--)
    {
        suf[i] = suf[i + 1] + v[i];
    }

    int flag = 0;

    for (int i = 1; i <= n; i++)
    {
        if (pre[i] == suf[i])
        {
            cout << pre[i] << " " << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "UNSTABLE" << endl;

    return 0;
}