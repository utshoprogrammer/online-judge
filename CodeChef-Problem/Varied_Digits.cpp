// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     int first_digit = x / 10;
//     int second_digit = x % 10;
//     if (first_digit != second_digit)
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
//     return 0;
// }

// or

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    if(s[0] == s[1])
    {
        cout << "No\n";
    }
    else cout << "Yes\n";
}
