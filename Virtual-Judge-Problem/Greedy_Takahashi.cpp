#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, k;
    cin >> a >> b >> k;

    long long int Takahashi_eating = min(a, k);
    long long int Aoki_enting = min(b, (k - Takahashi_eating));

    long long int takahashi_eat = a - Takahashi_eating;
    long long int aoki_eat = b - Aoki_enting;

    cout << takahashi_eat << " " << aoki_eat << endl;

    return 0;
}