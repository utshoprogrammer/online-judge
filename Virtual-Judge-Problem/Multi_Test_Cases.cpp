#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for(int i = 0 ;i < n;i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for(int i = 0;i < n;i++)
        {
            if(a[i]%2!=0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}