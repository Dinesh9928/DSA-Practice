#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i< n;i++)
    cin>>arr[i];
    int sum;
    cin>>sum;
    sort(arr, arr+n);
    int i=0, j=n-1;
    int low, high;
    low=i;
    high=j;
    while(low<high)
    {
        if(arr[low]+arr[high]==sum)
        {
            cout<<arr[low]<<' '<<arr[high];
            return 0;
        }
        else if(arr[low]+arr[high]<sum)
        {
            low++;
        }
        else{
            high--;
        }

    }
   cout<<-1;
   return 0;

}
