#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    string ans = s;

    //string এর প্রতিটা জায়গা থেকে k size এর window নাও
    for(int i = 0; i <= n-k;i++)    
    { 
        //মূল string এর copy নাও, original নষ্ট করবে না
        string temp = s;
        
        //sort করো শুধু সেই window
        sort(temp.begin()+i,temp.begin()+i+k);

        if(temp < ans) ans = temp;
    }  
    cout << ans << endl;
    
    return 0;
}