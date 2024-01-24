# include<bits/stdc++.h>
using namespace std;

void fibonnaci(int n)
{
    int x1=0;
    int x2=1;
    int sum=0;
    while(n)
    {
    cout<<x1<<' ';
    sum=x1+x2;
    x1=x2;
    x2=sum;
    n--;
    }
}

int main()
{
    int n;
    cin>>n;
    fibonnaci(n);
}