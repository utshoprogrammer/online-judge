#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'o')
        {
            count++;
        }
    }
    if(count % 2 == 0)
    {
        cout << "even\n";
    }
    else cout << "odd\n";
    
    return 0;
}