# include<bits/stdc++.h>
using namespace std;

int primefact(int n)
{
    int count[100]={0};
    for(int i=2 ; i<n; i++)
    {
        if(count[i]==0)
        for(int j=i*i; j<n; j+=i)
        {
            count[j]=1;
        }
    }
int ans=1;
for(int i=2; i<n;i++)
{
    if(count[i]==0 && n%i!=0)
    ans++;

}
return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<primefact(n);


}