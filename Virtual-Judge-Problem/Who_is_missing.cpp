#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int N = 4 * n - 1;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    int fre[100001] = {0};

    for (int i = 0; i < N; i++)
    {
        fre[a[i]]++;
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (fre[a[i]] == 3)
        {
            count = a[i];
            break;
        }
    }
    cout << count << endl;

    return 0;
}