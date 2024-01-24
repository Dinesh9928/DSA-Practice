# include<bits/stdc++.h>
using namespace std;
void findivi(int a, int b)
{
    while(b!=0)
    {
    int rem = a%b;
    a=b;
    b=rem; 
    }
    cout<<a<<" ";

}
int main()
{
    int a, b;
    cin>>a>>b;
    findivi(a, b);
}