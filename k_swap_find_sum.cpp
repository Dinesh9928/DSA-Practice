// given two find maximum sum of two array you can perform k number of swap
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n], b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    sort(a, a+n);
    sort(b, b+n, greater<int>());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            if(k)
            {
                swap(a[i],b[i]);
                k--;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

    }
    cout<<sum;
    
}