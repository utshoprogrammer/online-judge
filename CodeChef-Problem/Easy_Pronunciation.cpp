#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int flag = 1;
        int count_cons = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                count_cons++;
            }
            else
            {
                count_cons = 0;
            }

            if (count_cons >= 4)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}