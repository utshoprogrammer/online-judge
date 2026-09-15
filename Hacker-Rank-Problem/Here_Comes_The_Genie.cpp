#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    v.erase(unique(v.begin(),v.end()),v.end());

    long long int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    cout << sum << endl;
     
    return 0;
}