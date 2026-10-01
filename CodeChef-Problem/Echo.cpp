#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = s.size();
    if (len < 4)
    {
        cout << "No" << endl;
    }
    else
    {       
        if (s[0] == s[2] && s[1] == s[3])
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}