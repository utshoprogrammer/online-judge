#include<bits/stdc++.h>
using namespace std;

int n = 2e6;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long int> v(n);
    v[1] = 1;
    for (int i = 1; i+1 < n; i++)
    {
        v[i+1] = v[i] + i;
    }
    vector<long long int> pre(n);
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    
    int t; cin >> t;
    while (t--)
    {
        long long int N; cin >> N;

        int pos = upper_bound(pre.begin(),pre.end(),N) - pre.begin();

        cout << pos - 1 << endl;     
    }

    return 0;
}