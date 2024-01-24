# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int ans=0, curr=0;

    for (int i=0; i<n;i++)
    {
        curr+=arr[i];
        if(curr<0)
        {
            curr=0;
        }
        
        ans=max(curr, ans);
    }
    cout<<ans<<endl;
}