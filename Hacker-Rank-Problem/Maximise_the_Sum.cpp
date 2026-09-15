#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;

        long long int max_number = max({a,b,c,d,e});

        if(max_number == a)
        {
            long long int total_num = -1*(b+c+d+e);
            long long int ans = max_number + total_num;
            cout << ans << endl;
        }
        else if(max_number == b)
        {
            long long int total_num = -1*(a+c+d+e);
            long long int ans = max_number + total_num;
            cout << ans << endl;
        }
        else if(max_number == c)
        {
            long long int total_num = -1*(a+b+d+e);
            long long int ans = max_number + total_num;
            cout << ans << endl;
        }
        else if(max_number == d)
        {
            long long int total_num = -1*(a+b+c+e);
            long long int ans = max_number + total_num;
            cout << ans << endl;
        }
        else if(max_number == e)
        {
            long long int total_num = -1*(a+b+c+d);
            long long int ans = max_number + total_num;
            cout << ans << endl;
        }
    }

    return 0;
}