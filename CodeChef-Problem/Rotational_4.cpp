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
//              string s; cin >> s;

//              int count = 0;

//              for (int i = 0; i < n; i++)
//              {
//                 int  x = stoi(string()+s[i] + s[(i+1)%n]);
//                 if(x %  4 ==0)
//                 {
//                     count++;
//                 }
//              }
//             int x = stoi(string() + s[0] + s[n-1]);

//              cout << count << endl;

//     }

//     return 0;
// }

// OR

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
        string s;
        cin >> s;

        int count = 0;
        if (n == 1)
        {
            int d = s[0] - '0';
            if (d % 4 == 0)
            {
                count++;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                int k = (s[j] - '0') * 10 + (s[(j + 1) % n] - '0');
                if (k % 4 == 0)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}