# include<bits/stdc++.h>
using namespace std;

void find(int num, int a, int b)
{
    int x= num/a;
    int y = num/b;
    int z = num/(a*b);
    cout<<x+y-z;
}

int main()
{
    int c,a,b;
    cin>>c>>a>>b;
    find(c, a, b);
}