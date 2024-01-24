# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    const int N=1000;
    int check[N];
    int ans=INT_MAX;
    if(n==1)
    cout<<"-1";
    for(int i=0; i<N;i++)
    {
        check[i]=-1;
    }
    for(int i=0; i<n;i++)
    {
        if(check[arr[i]]!=-1)
        {
            ans=min(ans, check[arr[i]]);

        }
        else
        {
            check[arr[i]]=i;
        }
    
    }
    cout<<ans+1<<endl;


}