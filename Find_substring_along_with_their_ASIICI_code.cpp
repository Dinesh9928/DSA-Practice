# include<bits/stdc++.h>
using namespace std;

void find_sub(string s, string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch; 
    string ros = s.substr(1);
    return find_sub(ros, ans);
    return find_sub(ros, ans+ch);
    return find_sub(ros , ans+to_string(code));
}

int main()
{
    string s = "ABC";
    find_sub(s,"");

}