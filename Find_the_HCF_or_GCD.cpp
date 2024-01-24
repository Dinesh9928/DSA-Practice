# include<bits/stdc++.h>
using namespace std;

int findgcd(int a, int b)
{
    while(b!=0)
    {
        int rem = a%b;
        a=b; 
        b=rem;
    }

    return a;
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    cout<<findgcd(a,b)<<endl;
    else
    cout<<findgcd(b,a)<<endl;
}