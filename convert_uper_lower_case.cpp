# include<bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<'A'-'a'<<endl;
    string s1;
    cin>>s1;
   
    for(int i=0; i<=s1.size();i++)
    {
        if(s1[i]>='a' &&s1[i]<='z')
         {s1[i]-=32;}
    }

    cout<<s1<<endl;

     for(int i=0; i<=s1.size();i++)
    {
        if(s1[i]>='A' &&s1[i]<='Z')
         {s1[i]+=32;}
    }
    cout<<s1<<endl;

    transform(s1.begin(), s1.end(), s1.begin(),::toupper);
    cout<<s1<<endl;

    transform(s1.begin(), s1.end(), s1.begin(),::tolower);
    cout<<s1<<endl;

}