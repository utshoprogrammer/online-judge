#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        vector<long long int> pre(n);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i-1] + v[i];
        }
        long long int total_sum = pre[n-1];
        long long int max_sum = 0;

        // i হলো লাল রঙের এলিমেন্টের সংখ্যা (C_R)
        //  i এর মান 1 থেকে n-1 পর্যন্ত হতে পারে

        for (int i = 1; i < n; i++)
        {
            long long int c_r = i;
            long long int c_b = n - i;
            
            long long int s_r = pre[i-1];     // প্রথম i টি এলিমেন্টের যোগফল
            long long int s_b = total_sum - s_r;    // বাকী এলিমেন্টগুলোর যোগফল

            long long int cur_sum = (s_r * c_b) + (s_b * c_r);   // present sum 

            max_sum = max(max_sum,cur_sum);   // compare high max_sum
        }

        cout << max_sum << endl;       
        
    }
    
    return 0;
}