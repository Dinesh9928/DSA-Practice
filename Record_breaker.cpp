// The day is record breaker if its the maximum of the previous element and also greter than following element

# include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int record=0;
    int maxtill=INT_MIN;
    if(n==1)
    {
    cout<<1;
    return 0;}
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>maxtill && arr[i]>arr[i+1])
        {
            record++;
        }
        maxtill=max(maxtill, arr[i]);
    
    }
    if(arr[n-1]>arr[n])
    record++;

    cout<<record;
    
    return 0;
}