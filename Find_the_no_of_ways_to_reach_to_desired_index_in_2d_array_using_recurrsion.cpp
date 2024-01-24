# include<bits/stdc++.h>
using namespace std;

int count_way(int n, int i, int j)
{
    if(i==n-1 and j==n-1)
    {
        return 1;
    }
    if(i>=n  or j>=n )
    {
        return 0;
    }
    return count_way(n, i+1, j) + count_way(n, i, j+1);
}

int main()
{
   cout<<count_way(3,0,0)<<endl;
}