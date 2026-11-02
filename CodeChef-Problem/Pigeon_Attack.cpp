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
//         int n, k;
//         cin >> n >> k;
//         if (n < k)
//         {
//             cout << n << endl;
//         }
//         else
//         {
//             int time_count = 0;

//             for (int i = 1; ;i++)
//             {
//                 if(i % k == 0)
//                 {
//                     continue;
//                 }
//                 time_count++;

//                 if(time_count == n)
//                 {
//                     cout << i << endl;
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }

// or  more optimize

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
         int n,k ; cin >> n >> k;
         int time = 0;
         if(n < k) time =  n ;
         else{
            int free = k - 1;
            int remining = n - free;
            time += ceil(1.0*(remining * k) / (k-1));
            time += free;
         }
         cout << time << endl;
    }

    return 0;
}

// or

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
//         int n, k;
//         cin >> n >> k;
//         int work = 0, time = 0;
//         while (work < n)
//         {
//             time++;
//             if (time % k == 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 work++;
//             }
//         }
//         cout << time << endl;
//     }

//     return 0;
// }