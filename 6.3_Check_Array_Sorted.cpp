#include <bits/stdc++.h>
using namespace std;

// Check array is sorted or not

int array_sorted_or_not(vector<int> &arr,int n) // N
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
}

int main()
{
    int n=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    array_sorted_or_not(arr,n);
    return 1;
}