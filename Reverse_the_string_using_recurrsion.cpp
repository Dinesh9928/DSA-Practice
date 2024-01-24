# include<bits/stdc++.h>
using namespace std;

void reversestr(string str)
{
    if(str.length()==0)
    {
        return;
    }

    reversestr( str.substr(1));
    cout<<str[0];
}

int main()
{
    string str ="binod";
    reversestr(str);
}