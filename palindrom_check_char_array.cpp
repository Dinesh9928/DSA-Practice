# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    bool check =1;
    
    for(int i =0; i<n; i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check =0;
        }
    }
    if(check)
    cout<<"Panlindrome: "<<endl;
    else
    cout<<"NOT Panlindrome: "<<endl;
    
return 0;
}