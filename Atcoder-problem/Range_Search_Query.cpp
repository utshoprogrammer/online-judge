#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q; cin >> q;
    string s,t; cin >> s >> t;
    int n = s.size(),m = t.size();

    //বার বার কোয়ারির ভেতরে লুপ চালালে টাইম শেষ হয়ে যাবে। তাই শুরুতেই পুরো s স্ট্রিং স্ক্যান করে বের করা হয় যে t স্ট্রিংটি s-এর কোথায় কোথায় মিলে যায়।
    vector<int> valid_starts;
    for (int i = 0; i <= n-m; i++)
    {
        //s.compare(i, m, t) == 0 চেক করে i থেকে শুরু করে m দৈর্ঘ্যের সাবস্ট্রিংটি t-এর সমান কিনা।
        if(s.compare(i,m,t) == 0)
        {
            //মিলে গেলে তার 1-based index (i + 1) একটি ভেক্টরে (valid_starts) জমিয়ে রাখা হয়।
            valid_starts.push_back(i+1);
        }
    }  
    while (q--)
    {
        int l,r; cin >> l >> r;
        int target_max = r-m+1;

        //target_max = r - m + 1: এটি হলো t-এর শুরুর এমন একটি সর্বোচ্চ পজিশন, যার পর আর t কে r সীমার মধ্যে রাখা সম্ভব না (কারণ t-এর সাইজ m)।
        // যদি target_max এর মান l এর চেয়েও কম হয়, তবে পরিষ্কার যে রেঞ্জের মধ্যে t পুরোটা ফিট করবে না। তাই সরাসরি "No" প্রিন্ট করে দেওয়া হয়।
        if(target_max < l)
        {
            cout << "No" << endl;
            continue;
        }
        //lower_bound ব্যবহার করে valid_starts ভেক্টর থেকে এমন একটি ইনডেক্স খোঁজা হয় যা l-এর সমান বা তার চেয়ে বড়।
        auto it = lower_bound(valid_starts.begin(),valid_starts.end(),l);
        //শর্ত চেক করা হয়: প্রাপ্ত ইনডেক্সটি (*it) কি target_max-এর সমান বা তার ছোট কিনা? অর্থাৎ, সেটি রেঞ্জের ভেতরে আছে কিনা।
        if(it != valid_starts.end() && *it <= target_max)
        {
            cout <<"Yes" << endl;
        }
        else{
            cout <<"No" << endl;
        }      
    }
    
    return 0;
}