# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    sort(arr, arr+n);
    int high, low, sum=0;
    high = n -1;
    low = 0;
    while(low<high)
    {
        sum=arr[high]+ arr[low];
        if(sum<target)
        {
            low++;   
        }
        else if(sum>target)
        {
            high--;
        }
        else
        {
            cout<<arr[low]<<" "<<arr[high]<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}