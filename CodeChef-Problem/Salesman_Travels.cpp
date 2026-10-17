#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        vector<int> even,odd;
        for (int i = 1; i <= n; i++)
        {
            if(i%2 == 0) even.push_back(i);
            else odd.push_back(i);
        }
        reverse(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        for (auto val : even)
        {
            cout << val <<" ";
        }
        for (auto val : odd)
        {
            cout << val <<" ";
        }
        cout << endl;
        
    }

    return 0;
}