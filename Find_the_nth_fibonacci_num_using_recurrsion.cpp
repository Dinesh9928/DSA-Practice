# include<bits/stdc++.h>
using namespace std;

int find(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    return find(n-1) + find(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<find(n);
}