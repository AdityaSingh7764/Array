#include <bits/stdc++.h>
using namespace std;
// Second Largest in array

int second_largest_array_brute(vector<int> &arr,int n) // N LogN + N = N Log N
{
    sort(arr.begin(),arr.end());
    int largest=arr[n-1];
    int secondlargest=0;
    for(int i=n-2;i>0;i--)
    {
        if(arr[i]<largest)
        {
            secondlargest=arr[i];
            break;
        }
    }
    cout<<"Second Largest in Array: "<<secondlargest<<"\n";
}

int second_largest_array_optimal(vector<int> &arr,int n) // N
{
    int largest=arr[0];
    int secondlargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]>arr[i])
        {
            largest=arr[i+1];
            secondlargest=arr[i];
        }
    }
    cout<<"Second Largest in Array: "<<secondlargest<<"\n";
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
    second_largest_array_brute(arr,n);
    second_largest_array_optimal(arr,n);
    return 1;
}