# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    cin>>arr[i];
    int mx = INT_MIN;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    int record =0;
    for(int i=0; i<n-1; i++)
    {
        if(mx < arr[i] && arr[i]>arr[i+1])
        {
            record++;
            mx = max(mx,arr[i]);
        }
    }
    if(arr[n-1]>arr[n-2])
    {
        record++;
    }
    cout<<record<<endl;
}