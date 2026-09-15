#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int count = 0;
        for (int i = 0; i <= n - 4; i++)
        {
            string temp = s;
            
            string ans = temp.substr(i,4);
            if(ans == "2026")
            {
                count == 0;
            }
            else if(ans == "2025" && ans != "2025")
            {
                count == 1;
            }
            else if(ans != "2025")
            {
                count == 0;
            }
        }
        cout << count;
    }
    return 0;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int count = 0;
        for (int i = 0; i <= n - 4; i++)
        {
            string temp = s;
            
            string ans = temp.substr(i,4);
            if(ans == "2026")
            {
                count == 0;
            }
            else if(ans == "2025" && ans != "2025")
            {
                count == 1;
            }
            else if(ans != "2025")
            {
                count == 0;
            }
        }
        cout << count;
    }
    return 0;
}