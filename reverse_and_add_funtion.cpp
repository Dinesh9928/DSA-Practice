# include<bits/stdc++.h>
using namespace std;

long long reversedigit(long long num)
{
    int rev=0;
    while (num>0)
    {
        int last = num%10;
        rev = rev*10+last;
        num/=10;
    }
    return rev; 
}
bool ispalindrome(long long num)
{
    if(num == reversedigit(num))
     return 1;
}
void reverseandadd(long long num)
{
    int rev=0;
    while(num<=4294967295)
    {
        rev = reversedigit(num);
        num = num+rev;
        if(ispalindrome(num)){
        cout<<num<<endl;
        break;
        }

        if(num>=4294967295) {
            cout<<"palindrom doesn't exist"<<endl;
         }

    }
}

int main()
{
    reverseandadd(12);
    return 0;
}