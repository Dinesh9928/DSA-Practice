# include<bits/stdc++.h>
using namespace std;

void primefact(int n)
{
    int prime[100];
    for(int i=0; i<100; i++)
     prime[i]=i;

     for(int i=2; i<=n; i++)
       for(int j = i*i; j<=n; j+=i)
           if(prime[j]==j)
            prime[j]=i;
    
    while(n!=1)
    {
        cout<<prime[n]<<" ";
        n = n/prime[n];
    }
     
          
}


int main()
{
    int n;
    cin>>n;
    primefact(n);

}

// void primefact(int n)
// {
//     int prime[100];
    
//     for(int i=0; i<100; i++)
//         prime[i]=i;
    

//     for(int i=2; i<=n; i++)
//         for(int j=i*i; j<=n; j+=i)
//         if(prime[j]==j)
//         prime[j]=i;
    
//     while(n!=1)
//     {
//         cout<<prime[n]<<" ";
//         n=n/prime[n];
    
//     }
// }