# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    int n2;
    cin>>n1>>n2;
    int ans=0, carry=0;

    while(n1>0 && n2>0)
    {
        int x, y;
        x=n1%10; y=n2%10;
        if(x==0 && y==0 )
        {

            ans = ans*10 + carry;
            carry=0;
        }
        else if( (x==0 && y==1) || (x==1 && y==0))
        {
            if(carry==1)
            {
            ans=ans*10 + 0;
            carry=1;
            }
            else
            {
            ans=ans*10 +1;
            carry=0;
            }

        }
        else 
        {
            ans=ans*10 + carry;
            carry=1;
        }
        n1/=10;
        n2/=10;
    }
    while(n1>0)
    {
        int x=n1%10;
        if(x==1)
        {
            if(carry==0)
            {
                ans=ans*10+1;
                carry=0;

            }
            else
            {
                ans=ans*10 + 0;
                carry=1;
            }
        }
        if(x==0)
        {
            if(carry==0)
            {
                ans=ans*10+0;
                carry=0;

            }
            else
            {
                ans=ans*10 + 1;
                carry=0;
            }
        }
        n1/=10;
        
    }
    while(n2>0)
    {
        int x=n2%10;
        if(x==1)
        {
            if(carry==0)
            {
                ans=ans*10+1;
                carry=0;

            }
            else
            {
                ans=ans*10 + 0;
                carry=1;
            }
        }
        if(x==0)
        {
            if(carry==0)
            {
                ans=ans*10+0;
                carry=0;

            }
            else
            {
                ans=ans*10 + 1;
                carry=0;
            }
        }
        n2/=10;
        
    }
    int ansr=ans;
    ans=0;
    while(ansr>0)
    {
        int lastdigit=ansr%2;
        ans=ans*10 + lastdigit;
        ansr/=10;
    }
    cout<<ans<<endl;
    return 0;

}