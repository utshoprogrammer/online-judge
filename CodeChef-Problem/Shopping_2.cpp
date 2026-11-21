// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define input(x)      \
//     for (auto &i : x) \
//     cin >> i
// #define output(x)     \
//     for (auto &i : x) \
//     cout << i << " "
// #define yes() cout << "YES\n"
// #define no() cout << "NO\n"
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define endl "\n"

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int n, d;
//         cin >> n >> d;
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//         int s = d,s2 = d,k = 0;
//         for (int i = 0; i < n; i++)
//         {
//             s += a[i];
//             s2 += b[i];
//             k += min(a[i],b[i]);
//         }
//         int sum = 2*d + k;

//         cout << min({s,s2,sum}) << endl;
        
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n >> d;
        vector<int> a(n),b(n);
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        for(int i = 0;i < n;i++)
        {
            cin >> b[i];
        }
        int f = 0,s = 0,total = 0;
        for(int i= 0;i < n;i++)
        {
            f += a[i];
            s += b[i];
            total += min(a[i],b[i]);
        }
        cout <<min({f + d,s+d,total + 2*d}) << endl;
    }
}
