#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n =str.size();
    bool flag =1;
    for(int i=0; i<n; i++)
    {
        if(str[i]!=str[n-1-i]){
         flag =0;
         break;
        }
    }
    if(flag==0)
     cout<<"non palindrome";
     else
     cout<<" palindrome";
}