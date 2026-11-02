// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int count = 0, ans = 0;
//         char c = s[0];
//         for (int i = 0; i < n; i++)
//         {
//             if (c == s[i])
//             {
//                 count++;
//             }
//             else
//             {
//                 count = 1;
//                 c = s[i];
//             }
//             if (count == 3)
//             {
//                 ans++;
//                 count = 0;
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }

// or

#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
         int n; cin >> n;
         string s; cin >> s;
         int ans = 0,i = 0;
         while (i < n)
         {
            if(s[i] == s[i+1] && s[i+1] == s[i+2] && i+2 < n)
            {
                i += 3;
                ans++;
            }
            else i++;       
         }
         cout << ans << endl;
    }

    return 0;
}