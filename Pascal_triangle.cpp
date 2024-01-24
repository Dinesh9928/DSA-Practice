# include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans=1;
    for(int i=n;i>=2;i--)
    {
        ans=ans*i;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
}