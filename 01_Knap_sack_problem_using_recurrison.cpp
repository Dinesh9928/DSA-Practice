# include<bits/stdc++.h>
using namespace std;

int knapsack(int val[], int w[], int n, int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(w[n-1]>W)
    {
        return knapsack(val, w, n-1, W);
    }
    // NOw, there are 2 option for me eighter to include or  not
   return max( knapsack(val, w, n-1, W-w[n-1]) + val[n-1], knapsack(val, w, n-1, W));
}

int main()
{
    int w[3]={10, 20, 30};
    int val[3]= {100, 50, 150};
    int W = 50;
    cout<<knapsack(val,w,3,W);
}