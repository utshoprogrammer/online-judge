#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    for (int i = 0; i < s.size()-1; i++)
    {
        cout << s[i] << "o" ;
    }
    cout << s[s.size()-1];
    

    return 0;
}