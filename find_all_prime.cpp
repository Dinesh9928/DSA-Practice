# include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    int i=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
       break;
    }
    if(i<sqrt(n))
    return false;
    else
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }
}