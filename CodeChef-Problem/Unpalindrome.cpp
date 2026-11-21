#include<bits/stdc++.h>
using namespace std;

# define ll long long
#define pii pair<int,int>
#define pll pair<long long,long long>
#define input(x) for(auto &i:x) cin>>i
#define output(x) for(auto &i:x) cout<<i<<" "
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
             int n; cin >> n;
             vector<int> v(n+1);
             for (int i = 1; i <= n; i++)
             {
                cin >> v[i];
             }

             bool flag = true;
             int i = 1,j = n;
             while(i <= j)
             {
                if(v[i] != v[j])
                {
                    flag = false;
                    break;
                }
                i++,j--;
             }
             if(flag == true){
               no();
               continue;
             }
            //  vector<bool> seen(n+1,false);
            //  for (int i = 1; i <= n; i++)
            //  {
            //    seen[v[i]] = true;
            //  }
             
            //  int miss_val = -1;
            //  for (int i = 1; i <= n; i++)
            //  {
            //    if(!seen[i])
            //    {
            //       miss_val = i;
            //       break;
            //    }
            //  }
            //  if(miss_val != -1)
            //  {
            //    cout <<"YES" <<" " << miss_val << endl;
            //  }
            //  else if(n==2) no();
            //  else cout <<"YES 1" << endl;

            map<int,int> mp;
            for (int i = 1; i <= n; i++)
            {
               mp[v[i]] = i;
            }
            int miss_val = -1;
            for (int i = 1; i <= n; i++)
            {
               auto it = mp.find(i);
               if(it == mp.end())
               {
                  miss_val = i;
                  break;
               }
            }
            if(miss_val != -1) cout <<"YES" <<" "<< miss_val << endl;
            else if(n==2) no();
            else cout << "YES 1" << endl;
            
    }
    return 0;
}