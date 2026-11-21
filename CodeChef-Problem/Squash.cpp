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
             int n,k; cin >>  n >> k;
             string s; cin >> s;

             if(n == k)
             {
                cout <<"YES\n";
                continue;
             }
             int i = 0,j = 1;
             int count = 1;
             while (j < n)
             {
                if(s[i] != s[j])
                {
                    count++;
                }
                i++,j++;
             }
             if(count <= k)
             {
                cout << "YES\n";
             }
             else  cout <<"NO\n";
             
    }

    return 0;
}