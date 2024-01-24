# include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int num=1; num<=10000; num++)
    {
        int arm = num;
        int ans=0;
        while(arm>=1)
        {
            int last = arm%10;
            ans +=pow(last,3);
            arm/=10;
        }
        if(ans==num)
        cout<<ans<<" ";

    }
    return 0;
}