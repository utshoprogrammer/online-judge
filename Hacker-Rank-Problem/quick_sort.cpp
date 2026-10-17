#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int st,int end)
{
    int indx = st-1,pivt = arr[end];
    for(int j = st;j < end;j++)
    {
        if(arr[j] <= pivt)
        {
            indx++;
            swap(arr[j],arr[indx]);
        }
    }
    indx++;
    swap(arr[end],arr[indx]);
    return indx;
}
void quicksort(vector<int> &arr,int st,int end)
{
    if(st < end)
    {
        int pivindx = partition(arr,st,end);

        quicksort(arr,st,pivindx -1);  // left half call
        quicksort(arr,pivindx+1,end);  // right half call


    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {5,2,6,4,1,3};

    quicksort(arr,0,arr.size()-1);

    for(auto val : arr)
    {
        cout << val <<" ";
    }
    cout << endl;

    return 0;
}