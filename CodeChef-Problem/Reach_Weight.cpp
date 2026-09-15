#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
     
        if(n%2 == 0)
        {
            sum = (n/2)*30;
        }
        else{
            sum = (n-1)/2*30 + 20;

        }
        cout << sum << endl;
        
    }
    

    return 0;
}