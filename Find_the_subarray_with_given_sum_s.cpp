# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i = 0, j =0, st= -1, en= -1;
    int sum=0;

    while(j<n && (sum + arr[j])<= s)
    {
        sum += arr[j];
        j++;
    }
    if(sum == s)
    {
        cout<<i<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum +=arr[j];
        if(sum>s)
        {
            sum -=arr[i];
            i++;
        }
        if(sum == s )
        {
            st=i;
            en=j;
            
            cout<<st<<" "<<en<<endl;
            return 0;

        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    
}