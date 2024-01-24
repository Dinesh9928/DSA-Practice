# include<bits/stdc++.h>
using namespace std;

int main()
{
    string hex;
    cin>>hex;
    int ans=0;
    int n=hex.size();
    int x=1;
    for(int i=n-1;i>=0;i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            ans+=x*(hex[i]-'0');

        }
        if(hex[i]>='A'&& hex[i]<='F')
        {
            ans+=x*(hex[i]-'A'+10);
        }
        x*=16;

    }
    cout<<ans;
    return 0;
   
}