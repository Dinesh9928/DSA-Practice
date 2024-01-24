# include<bits/stdc++.h>
using namespace std;

 int checksorted(int arr[], int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray=checksorted(arr+1, n-1);

    return (arr[0]<arr[1]) && restarray;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    cin>>arr[i];

    cout<<checksorted(arr, n);
}