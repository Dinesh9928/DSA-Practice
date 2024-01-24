# include<bits/stdc++.h>
using namespace std;

int tiling_ways(int n)
{
    if(n==0|| n==1)
    {
        return n;
    }

    return tiling_ways(n-1) + tiling_ways(n-2);

    

}

int main()
{
    cout<<tiling_ways(4)<<endl;
}