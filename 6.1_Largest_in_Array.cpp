#include <bits/stdc++.h>
using namespace std;

//Largest_Element_in_array

int largest_in_array_brute(vector<int> &arr,int n) //N LogN
{
    sort(arr.begin(),arr.end());
    cout<<"Largest in Array: "<<arr[n-1]<<'\n';
    return 1;
}

int largest_in_array_optimal(vector<int> &arr,int n) //N
{
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest in Array: "<<largest;
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
    largest_in_array_brute(arr,n);
    largest_in_array_optimal(arr,n);
    return 1;
}