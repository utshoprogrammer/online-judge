#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int first_digit = x / 10;
    int second_digit = x % 10;
    if (first_digit != second_digit)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}