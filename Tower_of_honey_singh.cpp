# include<bits/stdc++.h>
using namespace std;

void toi(int n, char sour, char dest, char help)
{
    if(n==0)
    {
        return;
    }
    toi(n-1,sour,help,dest);
    cout<<" MoVING FROM "<<sour<<" TO "<<dest<<endl;
    toi(n-1,help, dest, sour);

}

int main()
{
    int n;
    cin>>n;
    toi(n,'A','C', 'B');
}