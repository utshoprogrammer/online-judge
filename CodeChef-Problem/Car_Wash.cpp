#include<bits/stdc++.h>
using namespace std;

# define ll long long
#define pii pair<int,int>
#define pll pair<long long,long long>
#define input(x) for(auto &i:x) cin>>i
#define output(x) for(auto &i:x) cout<<i<<" "
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
            ll int n,m,k; cin >> n >> m >> k;
            vector<pair< int,ll int>> p(k);
            for (auto &x : p)
            {
               cin >> x.first >> x.second;
            }
            sort(p.begin(),p.end());

            vector<ll int> v;
            for(auto &x : p)
            {
                auto it = upper_bound(v.begin(),v.end(),x.second);
                if(it == v.end())
                {
                    v.push_back(x.second);
                }
                else *it = x.second;
            }
            cout << n + m -1 +(ll)v.size() << endl;
    }

    return 0;
}