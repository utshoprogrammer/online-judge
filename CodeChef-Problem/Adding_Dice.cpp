#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y = 9 - x;
    if (y >= 1 && y <= 6)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}