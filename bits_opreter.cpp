# include<bits/stdc++.h>
using namespace std;

int getbit(int n, int pos)
{
    return(n&(1<<pos)!=0);
}
int setbit(int n, int pos)
{
    return(n|(1<<pos));
}
int clearbit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}
int updatebit(int n, int pos, int val)
{
 n = n & (~(1<<pos));

return (n | (val<<pos));

}

int main()
{
    int a=5;
    cout<<getbit(a, 2)<<endl;
    cout<<setbit(a,1)<<endl;
    cout<<clearbit(a,2)<<endl;
    cout<<updatebit(a,1,1)<<endl;


}