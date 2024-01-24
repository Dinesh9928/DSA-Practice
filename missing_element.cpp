// find missing element in the array even 0 too
# include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    const int N=1000;
    int count[N];
    for(int i=0;i<N;i++)
    {
        count[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=0;i<N;i++)
    {
        if(count[i]==-1)
        {
            cout<<i;
            return 0;
        }
    }

    return 0;
}