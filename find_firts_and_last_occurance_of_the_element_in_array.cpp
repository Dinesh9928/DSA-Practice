# include<bits/stdc++.h>
using namespace std;

void last_element(int arr[], int n, int key)
{
    if(key==arr[n])
    {
     cout<<n+1<<endl;
     return;   
    }
    last_element(arr, n-1, key);
}

int  first_element(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    
    if(key==arr[i])
    {
     cout<<i+1<<endl;
     return -1;   
    }
    first_element(arr, n,i+1,key);
    
}

int main()
{
    int arr[7]={4,2,1,2,5,2,7};
    int key;
    cin>>key;
    last_element(arr, 7, key);
    first_element(arr, 7,0, key);
    
}