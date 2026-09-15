#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < n; i+=k)
        {
            string temp = s;
            temp = temp.substr(i,k);
            int flag = 0;
            for(int i = 0;i < temp.size();i++)
            {
                if(temp[i] == '0')
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                count++;
        }
        cout << count << endl;
        
    }

    return 0;
}