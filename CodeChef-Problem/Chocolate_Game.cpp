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
             int n; cin >> n;
             vector<ll int> v(n);
             ll int total = 0;
             for (int i = 0; i < n; i++)
             {
                cin >> v[i];
                total += v[i];
             }
             ll int alice = 0,bob = 0,one = 0;
             for (int i = 0; i < n; i++)
             {
                ll int take = v[i];
                if(v[i] % 2 == 1)
                {
                    one++,take--;
                }
                if(total % 2 == 0)
                {
                    alice += take;
                }
                else bob += take;
             }
             alice += one/2;
             cout << alice << endl;
             
    }

    return 0;
}