# include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int x=1;
    string ans="";
    while(x<=num)
    {
        x*=16;
    }
    x/=16;
    while(x>0)
    {
        int lastdigit=num/x;
        num-=lastdigit*x;
        x/=16;
        if(lastdigit<9)
        ans=ans+to_string(lastdigit);
        else
        {
            char c = 'A' + lastdigit - 10;
           ans.push_back(c);
        }
        

    }
    cout<<ans<<endl;

}