#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d; cin >> n >> d;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = -1;
    for (int i = 1; i < n; i++)
    {
        if(v[i] - v[i-1] <= d)
        {
            ans = v[i];
            break;
        }
    }
    cout << ans << endl;
    
    return 0;
}