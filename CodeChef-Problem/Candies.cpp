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
        vector<long long int> v;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> v[i];
        } 
       // sort(v.begin(),v.end());

        long long int fre[1005] = {0};

        for (int i = 0; i < 2*n; ++i)
        {
            if(v[i] >= 0 && v[i] < fre.size())
            {
                
            }
            fre[v[i]]++;
        }
        int flag = 1;
        for (int j = 0; j < 1005; j++)
        {
            if(fre[j] > 2)
            {
                flag = 0;
                break;
            }
        }  
        if(flag == 1) cout <<"Yes" << endl;
        else cout <<"No" << endl;
    
    }
    return 0;
}