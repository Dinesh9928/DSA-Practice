#include<iostream>
using namespace std;
int kadens(int arr[], int n)
{
    int curr=0, ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr=curr+arr[i];
        if(curr<0)
        {
            curr=0;
        }
        ans=max(curr, ans);
        
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int nonwrapsum=0, wrapsum=0, totalsum=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    nonwrapsum=kadens(arr, n);
    for(int i=0;i<n;i++)
    {
        totalsum=totalsum+arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum + kadens(arr,n);

     cout<<max(wrapsum, nonwrapsum);

    return 0;
}