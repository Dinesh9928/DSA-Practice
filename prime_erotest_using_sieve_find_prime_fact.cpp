# include<bits/stdc++.h>
using namespace std;

void primefact(int n)
{

    int count[100]={0};
    for(int k=0; k<100;k++)
    {
        count[k] = k;
    }
    for(int i=2; i<n;i++)
    {
        if(count[i]=i)
        for(int j=i*i; j<n; j+=i)
        {
            if(count[j]=j)
            count[j]=i;

        }
    }
    while(n!=1)
    {
        cout<<count[n]<<" ";
        n=n/count[n];
    }

}

int main()
{
    int n;
    cin>>n;
    primefact(n);
}