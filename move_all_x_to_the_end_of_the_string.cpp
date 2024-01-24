# include<bits/stdc++.h>
using namespace std;

string moveallx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    string ans=moveallx(s.substr(1));

    if(s[0]=='x')
    {
        return(ans + s[0]);
    }
    else{
    return(s[0] + ans);
    }
}

int main()
{
    string s="axxbxcefxhix";
   cout<<moveallx(s);
}