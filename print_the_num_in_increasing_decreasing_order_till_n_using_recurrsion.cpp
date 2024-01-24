# include<bits/stdc++.h>
using namespace std;

void decprint(int n)
{
    if(n==0)
    {
      return ;
    }
    cout<<n<<" ";

    decprint(n-1);
}

void incprint(int n)
{
    
    if(n==0)
    {
        return;
    }
    incprint(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
   
    incprint(n);
    cout<<endl;
   decprint(n);
}