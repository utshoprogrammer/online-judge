#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> b;
    
    vector<long long int> a;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a.push_back(v[i]);
        }
        else
        {
            b.push_back(v[i]);
        }
    }

    sort(b.begin(),b.end());

    long long int max_sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            long long int sum = a[i] + b[j];
            if(sum > max_sum)
            {
                max_sum = sum;
            }
       }          
    }
    cout << max_sum << endl;

    return 0;
}