#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;
    string temp = s.substr(l, r);
    reverse(s.begin(),s.end());

    cout << s;

    return 0;
}