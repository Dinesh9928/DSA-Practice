# include<bits/stdc++.h>
using namespace std;

bool redundent(string s)
{
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='-' || s[i]=='+' || s[i]=='/' || s[i]=='*' || s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')' && st.top()!='(')
        {
            while(st.top()=='+' || st.top()=='-' || st.top()=='/' || st.top()=='*')
               st.pop();
            st.pop();
            
        }
        else if(s[i]==')' && st.top()=='(')
        return 1;
    }
    return 0;
}

int main()
{
    string s ="(A+(V-(c+)d))";
    cout<<redundent(s)<<endl;
    return 0;
}