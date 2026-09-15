#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count_z = 0, count_o = 0;
        // প্রথম K bulb এর window initialize
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '1')
            {
                count_o++;
            }
            else
            {
                count_z++;
            }
        }
         // মোট 1 এর সংখ্যা গণনা
        int total_o = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                total_o++;
        }
         // Flip না করলেও total_o টা answer হতে পারে
        int ans = total_o;

        int l = 0;
        int r = k - 1;

        while (r < n)
        {
            // এই window flip করলে কত 1 পাবো?
            // total_o - count_o (হারানো 1) + count_z (নতুন 1 হবে)

            ans = max(ans, total_o - count_o + count_z);

            // বাম দিক থেকে একটা বের করো
            if (s[l] == '1')
                count_o--;
            else
                count_z--;

             // ডান দিক থেকে নতুন একটা ঢোকাও
            if (r + 1 < n)
            {
                if (s[r+1] == '1')
                    count_o++;
                else
                    count_z++;
            }
            l++;
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}