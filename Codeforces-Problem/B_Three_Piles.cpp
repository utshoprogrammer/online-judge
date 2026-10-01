// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int a, b, c;
//         cin >> a >> b >> c;
//         if (a < b)
//         {
//             long long int ans = max(b - a, (a + c) - b);
//             cout << ans << endl;
//         }
//         else
//         {
//             cout << (a + c) - b << endl;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        long long int a,b,c; cin >> a >> b >> c;
        long long int ans = 0;
        if(a >= b)
        {
            ans = (a+c)-b;
        }
        else{
            ans = max(abs(a-b),(a+c)-b);
        }
        cout << ans << endl;
    }

    return 0;
}