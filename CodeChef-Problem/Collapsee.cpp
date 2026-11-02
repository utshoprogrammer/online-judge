#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   long long int t;
   cin >> t;
   while (t--)
   {
      ll int n;
      cin >> n;
      vector<ll int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }
      ll int ans = v[n-1] - v[n-2];
      for (int i = 0; i < n-2; i++)
      {
         ans += abs(v[i]);
      }
      cout << ans <<endl; 
   }

   return 0;
}