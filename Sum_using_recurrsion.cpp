# include<bits/stdc++.h>
using namespace std;

int findsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n + findsum(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<findsum(n);
}