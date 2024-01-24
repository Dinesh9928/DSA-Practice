# include<bits/stdc++.h>
using namespace std;
int findpow(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    return n * findpow(n, p-1);
}

int main()
{
    int n,p;
    cin>>n>>p;
   cout<<findpow(n,p)<<endl;
}