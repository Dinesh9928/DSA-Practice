// longest arthimethic sub array:
# include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int curr=2, ans=2;
    int df=arr[1]-arr[0];
    for(int i=1;i<n;i++)
    {
        if(df==arr[i+1]-arr[i])
        {
            curr++;
        }
        else{
            df=arr[i+1]-arr[i];
            ans=max(ans, curr);
            curr=0;
        }

    }
    cout<<ans;

    
    return 0;
}