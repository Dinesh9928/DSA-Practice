// finding subarray with maximun sum
// printing all possible sub array
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=0, ans=INT_MIN;

    for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
      if(sum<0)
      {
        sum=0;
      }
     ans=max(sum, ans);
    }
    if(ans==INT_MIN)
    cout<<-1;
    else
    cout<<ans;
    return 0;
}