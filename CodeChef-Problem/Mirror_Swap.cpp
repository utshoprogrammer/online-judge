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
        int N = 2 * n;
        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        int i = 0;
        int j = N-1;
        while (i <= j)
        {
            if(v[i] < v[j])
            {
                swap(v[i],v[j]);
            }
            i++;
            j--;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         if (a[j] + a[j - 1] <= k && a[j] < a[j - 1])
    //         {
    //             swap(a[j], a[j - 1]);
    //         }
    //     }
    // }

    return 0;
}