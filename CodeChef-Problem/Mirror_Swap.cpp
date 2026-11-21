// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int N = 2 * n;
//         vector<int> v(N);
//         for (int i = 0; i < N; i++)
//         {
//             cin >> v[i];
//         }
//         int i = 0;
//         int j = N-1;
//         while (i <= j)
//         {
//             if(v[i] < v[j])
//             {
//                 swap(v[i],v[j]);
//             }
//             i++;
//             j--;
//         }
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += v[i];
//         }
//         cout << sum << endl;
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 1; j < n; j++)
//     //     {
//     //         if (a[j] + a[j - 1] <= k && a[j] < a[j - 1])
//     //         {
//     //             swap(a[j], a[j - 1]);
//     //         }
//     //     }
//     // }

//     return 0;
// }

// or

// #include<bits/stdc++.h>
// using namespace std;

// # define ll long long
// #define pii pair<int,int>
// #define pll pair<long long,long long>
// #define input(x) for(auto &i:x) cin>>i
// #define output(x) for(auto &i:x) cout<<i<<" "
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
//              int n; cin >> n;
//              int N = 2*n;
//              vector<int> v(N);
//              for (int i = 0; i < N; i++)
//              {
//                 cin >> v[i];
//              }
//              int i = 0,j = N-1;
//              int ans = 0;
//              while(i < n)
//              {
//                 ans += max(v[i],v[j]);
//                 i++,j--;
//              }
//              cout << ans << endl;
//     }
//     return 0;
// }

// or
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
             int N = 2*n+1;
             vector<int> v(N);
             for (int i = 1; i <= N-1; i++)
             {
                cin >> v[i];
             }
             int ans = 0;
             for (int i = 1; i <= n; i++)
             {
                int cur = v[i];
                int mirror = v[2*n+1-i];
                ans += max(cur,mirror);
             }
             cout << ans << endl;
    }

    return 0;
}