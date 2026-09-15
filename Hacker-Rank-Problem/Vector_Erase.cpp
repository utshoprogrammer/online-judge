#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    int a,b;
    cin >> a >> b;

    vector<int> an;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] != v[x-1])
        {
            an.push_back(v[i]);
        }
    }
    an.erase(an.begin()+a-1,an.begin()+b-1);
    cout << an.size() << endl;
    for (int i = 0; i < an.size(); i++)
    {
        cout << an[i] <<" ";
    }
    
    
    
    return 0;
}