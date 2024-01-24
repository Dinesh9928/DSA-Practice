# include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int rev=0;
    while(num>0)
    {
        int last=num%10;
        rev=rev*10 +last;
        num/=10;
    }
    cout<<rev<<endl;
    return 0;
}
