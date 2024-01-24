// This program will find the first reapeating element of an array 
# include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    const int N=100;
    int count[N]={0};
    for(int i=0;i<N;i++)
    {
        count[i]=-1;
    }
    int minindex=INT_MAX;
    
    if(n==1)
    {
    cout<<arr[0];
    return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(count[arr[i]]!=-1 && count[arr[i]]<minindex)
        {
            minindex=count[arr[i]];
        }
        else
        {
            count[arr[i]]=i;
        }
    
    }
    if(minindex==INT_MAX)
    cout<<-1;
    else
    cout<<minindex+1;
    
    return 0;
}