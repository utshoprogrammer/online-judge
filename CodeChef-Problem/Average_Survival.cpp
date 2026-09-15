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
        int remining = n;
        while (1)
        {
            int sum = 0;
            for (int i = 0; i < v.size(); i++)
            {
                sum += v[i];
            }
            // int average = sum / remining;

            vector<int> b;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] * v.size() < sum) // মানে: v[i] < sum/v.size() (average)
                {
                    remining--;
                }
                else
                {
                    b.push_back(v[i]);
                }
            }
            if (v.size() == b.size())
                break;
            v = b;
        }
        cout << remining << endl;
    }
    return 0;
}