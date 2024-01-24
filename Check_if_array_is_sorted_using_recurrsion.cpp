# include<bits/stdc++.h>
using namespace std;

int check(int arr[],int n)
{
    if(n==1)
    {
        return 1;
    }
    return arr[0]<arr[1] && check(arr+1, n-1);
    
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<check(arr,5);
}
