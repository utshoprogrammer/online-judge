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
        long long int seconds_in_the_video = 24 * n;
        long long int video_is_worth = seconds_in_the_video * 1000;
        cout << video_is_worth << endl;
    }
    return 0;
}
