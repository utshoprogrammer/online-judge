#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    if (n <= 1000-1)
    {
        // no cut
        cout << n << endl;
    }
    else if (n >= 1000 && n <= 10000 - 1)
    {
        // cut one digit
        long long int num = n / 10;
        cout << num * 10 << endl;
    }
    else if (n >= 10000 && n <= 100000 - 1)
    {
        // cut two digit last
        long long int num2 = n /100;
        cout << num2 * 100 << endl;
    }
    else if (n >= 100000 && n <= 1000000 - 1)
    {
        // cut three last digit
        long long int num3 = n / 1000;
        cout << num3 * 1000 << endl;
    }
    else if (n >= 1000000 && n <= 10000000 - 1)
    {
        // cut four last digit
        long long int num4 = n / 10000;
        cout << num4 * 10000 << endl;
    }
    else if (n >= 10000000 && n <= 100000000 - 1)
    {
        // cut five last digit
        long long int num5 = n / 100000;
        cout << num5 * 100000 << endl;
    }
    else if (n >= 100000000 && n <= 1000000000 - 1)
    {
        // cut last six digit
        long long int num6 = n / 1000000;
        cout << num6 * 1000000 << endl;
    }

    return 0;
}