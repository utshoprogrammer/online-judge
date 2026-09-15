#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    int s = 0;
    int d = 0;

    // int i = 0;
    // int j = v.size()-1;
    // while (i <= j)
    // {
    //     if(v[i] < v[j])
    //         d += v[i];
    //     else d += v[j];
    //     i+=2; 
    //     j+=2;
    // }
    // for (int i = 1; i < v.size(); i+=2)
    // {
    //     s += v[i];
    // }
    // if(s < d)
    // {
    //     cout << d <<" "<< s << endl;
    // }
    // else cout << s <<" "<< d << endl;
    for (int x : v)
    {
        cout << x <<" ";
    }
    
    
    return 0;
}