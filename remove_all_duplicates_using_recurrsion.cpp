# include<bits/stdc++.h>
using namespace std;

string remove_duplicates(string s)
{
    if(s.size()==0)
    {
        return " ";
    }
    
    string ans= remove_duplicates(s.substr(1));

    if(s[0]==ans[0])
    {
        return ans;
    }
    return (s[0] + ans);
    


}

int main()
{
    string s="aaaabbbeeecdddd";
    cout<<remove_duplicates(s)<<endl;
    
}