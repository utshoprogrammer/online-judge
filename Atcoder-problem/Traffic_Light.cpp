#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    if(s == "B")
    {
        cout << "Y" << endl;
    }
    else if(s == "Y")
    {
        cout << "R" << endl;
    }
    else{
        cout << "B" << endl;
    }


    return 0;
}