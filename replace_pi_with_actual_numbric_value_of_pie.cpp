# include<bits/stdc++.h>
using namespace std;
void replacepi(string s)
{
    if(s.size()==0)
    {
        return;
    }
    string rep=to_string(3.14);

    if(s[0]=='p'&& s[1]=='i')
    {
        cout<<"3.14";

        replacepi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacepi(s.substr(1));

    }
}

int main()
{
    string s="pippxxpiixipi";
    replacepi(s);
}