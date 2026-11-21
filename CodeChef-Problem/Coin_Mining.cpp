#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int gpu,y;
        cin >> gpu>> y;

        int ans = 500;
        for (int g = 1; g <= 201; g++)
        {
            int cur_day = 1;
            int total_cost = gpu * g;
            int income = 0;
            while(income <= total_cost)
            {
                if(cur_day <= g)
                {
                    income += y * (cur_day * cur_day);
                }
                else{
                    income += y *(g*g);
                }
                if(income > total_cost) break;
                 cur_day++;
            }
            ans = min(ans,cur_day);
        }
        cout << ans << endl;    
    }

    return 0;
}
