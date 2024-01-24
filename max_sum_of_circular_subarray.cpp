# include<bits/stdc++.h>
using namespace std;

int kadens(int arr[], int n)
{
    int curr=0, ans=0;
    for(int i=0; i<n; i++)
    {
        curr+=arr[i];
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
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int wrapsum, nonwrapsum;
    int ans=0;
    nonwrapsum=kadens(arr, n);
    // wrapsum = total_sum - non_contributing_element(-ive element)

    int total_sum=0;

    for(int i=0;i<n;i++)
    {
        total_sum += arr[i];
        arr[i]=-arr[i];
    }

    wrapsum = total_sum + kadens(arr, n);

    ans = max(wrapsum, nonwrapsum);
    cout<<ans<<endl;
    return 0;


}