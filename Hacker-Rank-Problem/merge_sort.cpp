#include<bits/stdc++.h>
using namespace std;

void marge(vector<int> &arr,int st,int mid,int end)
{
    vector<int> temp;
    int i = st,j = mid+1;
    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])       // if need decending order then used ( >= ) condition
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    // left not empty hala
    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    // right not empty hal
    while(j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    } 
    // final sort 
    for(int indx = 0;indx < temp.size();indx++)
    {
        arr[indx+st] = temp[indx];
    }
}
void margesort(vector<int> &arr,int st,int end)
{
    if(st < end)
    {
        int mid = st + (end - st)/2;

        margesort(arr,st,mid);  // left
        margesort(arr,mid+1,end); // right

        marge(arr,st,mid,end);
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {12,31,35,8,17,32};

    margesort(arr,0,arr.size()-1);

    for(auto val : arr)
    {
        cout << val <<" ";
    }
    cout << endl;

    return 0;
}