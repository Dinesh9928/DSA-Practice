# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int x, y, z;

    x=n/a;
    y=n/b;
    z=n/(a*b);

    cout<<x+y-z<<endl;



return 0;
}