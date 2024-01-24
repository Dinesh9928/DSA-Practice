# include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    return(n && !(n & n-1));
}

int main()
{
    cout<<check(64)<<endl;
}
