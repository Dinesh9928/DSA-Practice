# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>target;
    int st=-1, end=-1, i, j;
    i=0; j=0;
    int sum=0;
    while(j<n && sum<=target)
    {
        sum+=arr[j];
        j++;
        if(sum==target)
        {
            st=i;
            end=j;
        }
    }
    while(j<n)
    {
        while(sum>target)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==target)
        {
            st=i;
            end=j;
        }
        j++;
    }
    if(st==-1 || end==-1)
    cout<<"-1"<<endl;
    else{
    for(int i=st;i<end;i++)
    cout<<arr[i]<<" ";
    }
return 0;

}