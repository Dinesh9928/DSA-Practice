# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    cin>>arr[i];
    int mx = INT_MIN;
    int N = 1000;
    int b[N];
    for(int i = 0; i<N ; i++)
     b[i]=-1;

    if(n==1)
    {
        cout<<"0";
        return 0;
    }
    int record =0;
    int mini = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(b[arr[i]]!=-1)
        {
           mini= min(b[arr[i]], mini);
        }
        else
        b[arr[i]]=i;
    }
    cout<<mini+1<<endl;

}