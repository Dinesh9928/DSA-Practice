# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=1, ans=0;
    while(x<=n)
    {
        x*=2;
    }
    x/=2;
    while(x>0)
    {
        int lastdigit = n/x;
        n -=x*lastdigit;
        x/=2;
        ans=ans*10 + lastdigit;

    }
    cout<<ans<<endl;
}