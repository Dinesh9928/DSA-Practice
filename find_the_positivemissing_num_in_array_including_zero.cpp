# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
    cout<<"-1";
    return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    const int N=1000;
    int check[N];
    
    for(int i=0; i<N;i++)
    {
        check[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        check[arr[i]]++;
    }
    for(int i=0; i<N; i++)
    {
        if(check[i]==-1)
        {
            cout<<i<<endl;
            return 0;
        }
    }


}