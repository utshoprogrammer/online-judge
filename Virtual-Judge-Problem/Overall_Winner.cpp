#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int Takahashi_won = 0;
    int Aoki_won = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'T')
        {
            Takahashi_won++;
        }
        else
        {
            Aoki_won++;
        }
    }
    if (Takahashi_won > Aoki_won)
        cout << "T" << endl;
    else if (Takahashi_won < Aoki_won)
        cout << "A" << endl;
    else
    {
        int count_t = 0;
        int count_a = 0;
        for(int i = 0;i < s.size()-1;i++)
        {
            if(s[i] == 'T')
                count_t++;
            else count_a++;
        }
        if (count_t > count_a)
            cout << "T" << endl;
        else 
            cout << "A" << endl;
    }
    return 0;
}