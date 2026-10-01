#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int len = s.size();

    if(s[len-1] == 'e')
    {
        cout << s << "r" << endl;
    }
    else{
        cout << s << "er" << endl;
    }

    return 0;
}