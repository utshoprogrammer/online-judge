#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(v[i]);

        if (pq.size() > 3)
            pq.pop();

        if (i >= 2)
            cout << pq.top() << endl;
    }

    return 0;
}