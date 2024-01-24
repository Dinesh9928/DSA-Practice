# include<bits/stdc++.h>
using namespace std;
void find_per(string s, string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i =0; i<s.size(); i++)
    {
        char ch = s[0];
        string ros = s.substr(0,i)+ s.substr(i+1);
        find_per(ros, ans+ch);
        
    }
}

int main()
{
    string s = "ABC";
    find_per(s, "");
}