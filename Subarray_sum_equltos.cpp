// This program will subarray whoes sum equal to given sum; 
# include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr, arr+n);
    
    int given_sum, sum=0;
    cin>>given_sum;
    int start=-1, end=-1;

    if(n==1 && arr[n]==given_sum)
    {
    cout<<arr[0];
    return 0;
    }

    int i=0, j=0;
    while(j<n && sum<given_sum)
    {
        sum=sum+arr[j];
        j++;
    }
    if(sum==given_sum)
    {
        cout<<i+1<<' '<<j;
        return 0;
    }

    while(j<n)
    {
        sum=sum+arr[j];
        while(sum>given_sum)
        {
            sum=sum-arr[i];
            i++;
        }
        if(sum==given_sum)
        {
           start=i;
           end=j;
           break;
        }
        
        
        
    }
    cout<<start<<' '<<end;

    return 0;
}