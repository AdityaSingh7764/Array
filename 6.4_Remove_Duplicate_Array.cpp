#include <bits/stdc++.h>
using namespace std;

// Remove duplicates from sorted array brute

int remove_duplicates_sorted_array_brute(vector<int> &arr,int n)
{
    set<int> s;
    for(int i=0;i<n;i++) // N LogN
    {
        s.insert(arr[i]);
    }
    for (auto i=s.begin();i!=s.end();++i) // N
    {
        int value = *i;
        cout<<value<<" ";
    }
    cout<<"\n";
    return 1;
}

int remove_duplicates_sorted_array_optimal(vector<int> &arr,int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
    remove_duplicates_sorted_array_brute(arr,n);
    int new_length = remove_duplicates_sorted_array_optimal(arr,n);
    for(int i=0;i<new_length;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 1;
}