# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int x=1;
    while(n>0)
    {
        int last = n%10;
        ans=ans+last*x;
        x*=8;
        n/=10;

    }
    cout<<ans<<endl;
    return 0;
}