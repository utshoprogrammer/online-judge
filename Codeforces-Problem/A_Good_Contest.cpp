// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         multiset<int> ms;
//         for (int i = 0; i < 3; i++)
//         {
//             int x; cin >> x;
//             ms.insert(x);
//         }
//         auto num = *ms.begin();

//         cout << n - num << endl;
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
        int n; cin >> n;
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        int strong_participate = min({v[0],v[1],v[2]});
        int week_participate = n - strong_participate;

        cout << week_participate << endl;
        
    }

    return 0;
}