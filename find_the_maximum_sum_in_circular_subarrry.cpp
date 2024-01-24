# include<bits/stdc++.h>
using namespace std;

int kidens(int arr[], int n)
{
    int curr =0;
    int ans = INT_MIN;
    for(int i =0 ; i<n ;i++)
    {
        curr+=arr[i];
        if(curr<0)
        {
            curr=0;
        }
        ans = max(ans, curr);
    }
    return ans;
}

int main()
{
    int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++)
     {
         cin>>arr[i];
     }
     int wrapsum, nonwrapsum, totalsum=0;
     nonwrapsum= kidens(arr,n);

     for(int i =0; i<n ;i++)
     {
       totalsum+=arr[i];
       arr[i]=-arr[i];  
     }
     wrapsum = totalsum + kidens(arr,n);
    cout<<max(nonwrapsum,wrapsum);

}