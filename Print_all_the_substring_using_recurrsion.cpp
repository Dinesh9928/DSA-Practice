# include<bits/stdc++.h>
using namespace std;
void find_substr(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    find_substr(ros,ans);
    find_substr(ros, ans+ch);
}

int main()
{
    string s = "DINESH";
    find_substr(s,"");
}