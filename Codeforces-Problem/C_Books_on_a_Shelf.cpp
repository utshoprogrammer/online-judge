#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)      \
    for (auto &i : x) \
    cin >> i
#define output(x)     \
    for (auto &i : x) \
    cout << i << " "
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int,int> count;
        for (int i = 0; i < n; i++)
        {
            count[v[i]]++;
        }
        int cnt1 = 0,cnt2 = 0;
        vector<int> a,b;
        for(auto [val,cnt] : count)
        {
            if(cnt == 1)
            {
                cnt1 += cnt;
                a.push_back(val);
            }
            else{
                cnt2 += cnt;
                b.push_back(val);
            }
        }
        int total = cnt1 + (2*cnt2);
    
        for(int i = 0;i < min(a.size(),b.size());i++)
        {
            cout << a[i] <<" "<< b[i] <<" ";
        }
        
    }

    return 0;
}