#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mid = n/2;
    int sum = 0;
    for (int i = mid; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
    
    return 0;
}