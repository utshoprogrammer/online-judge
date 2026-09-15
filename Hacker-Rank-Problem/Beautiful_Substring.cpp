#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string a = "101";
    string b = "010";

    int count_sub = 0;

    for (int i = 0; i <= n-3; i++)
    {
        string temp = s;

        string ans = temp.substr(i,3);

        if(ans == a || ans == b)
        {
            count_sub++;
        }
    }
    cout << count_sub << endl;
    
    return 0;
}