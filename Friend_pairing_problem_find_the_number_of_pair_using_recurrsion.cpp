# include<bits/stdc++.h>
using namespace std;

int friend_pairs(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }
    return friend_pairs(n-1) + friend_pairs(n-2)*(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<friend_pairs(n);
}