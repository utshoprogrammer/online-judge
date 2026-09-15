#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i+1; j < v.size(); j++)
            {
                if (i < j && v[i] <= v[j])
                {
                    count = max(count,(v[i] + v[j]));
                }
                else
                {
                    count = max(count,v[i]);
                }
            }
        }
        // int i = 0;
        // int j = v.size() - 1;
        // while (i != v.size() - 1 && j != 0)
        // {
        //     if (i < j && v[i] <= v[j])
        //     {
        //         count = v[i] + v[j];

        //     }
        //     else{
        //         count = max(count,v[i]);
        //     }
        //     i++;
        //     j--;
        // }

        cout << count << endl;
    }

    return 0;
}