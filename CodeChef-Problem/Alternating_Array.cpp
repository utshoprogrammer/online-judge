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
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int count1 = 0;
//         int count2 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             // pettern 1
//             if(i%2 == 0)
//             {
//                 if(a[i]%2 != 0)
//                 {

//                 }
//                 else{
//                     count1++;
//                 }
//             }
//             else{
//                 if(a[i]%2==0)
//                 {

//                 }
//                 else{
//                     count1++;
//                 }
//             }

//         }
//         for (int i = 0; i < n; i++)
//         {
//             // pattern 2
//             if(i%2 == 0)
//             {
//                 if(a[i]%2 == 0)
//                 {

//                 }
//                 else{
//                     count2++;
//                 }
//             }
//             else{
//                 if(a[i]%2!=0)
//                 {

//                 }
//                 else{
//                     count2++;
//                 }
//             }  
//         }  
//         cout << min(count1,count2) << endl;
//     }
//     return 0;
// }

// or 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // 1     2   3    4    5   6
        // even odd even odd even odd ....
        int ans1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(i % 2 == 0 && a[i]%2 == 0) ans1++;
            if(i%2 == 1 && a[i]%2 == 1) ans1++;
        }
        // 1    2    3   4    5   6
        // odd even odd even odd even ....
        int ans2 = 0;
         for (int i = 0; i < n; i++)
        {
            if(i % 2 == 0 && a[i]%2 == 1) ans2++;
            if(i%2 == 1 && a[i]%2 == 0) ans2++;
        }
        cout << min(ans1,ans2) << endl;
    }
    return 0;
}