#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n; cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long max_p = v[0];
    //v.push_back(0);
    for (int i = 0; i < n-1; i++)
    {
        if(v[i] < v[i+1])
        {
            max_p = v[i+1];
        }
        else{
            break;
        }
    }
    cout << max_p << endl;
    
    
    return 0;
}