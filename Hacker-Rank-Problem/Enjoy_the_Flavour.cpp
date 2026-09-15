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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // total sum count 
        long long int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += a[i];
        }

        long long ans = LLONG_MAX;
        long long s1 = 0;   // Left sum

        for (int i = 0; i < n-1; i++)
        {
            s1 += a[i];     // Left sum বাড়াও
            long long int s2 = total - s1;      // Right sum = Total - Left
            long long int d = abs(s1 - s2);     // Imbalance বের করো
            ans = min(ans,d);               // সবচেয়ে ছোটটা রাখো
            
        }
        cout << ans << endl;  
        
    }
    return 0;
}