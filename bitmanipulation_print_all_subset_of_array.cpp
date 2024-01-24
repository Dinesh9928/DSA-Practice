# include<bits/stdc++.h>
using namespace std;

void printsubset(int a[], int n)
{
    for(int i=0; i< (1<<n); i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i & 1<<j)
            cout<<a[j];
        }
        cout<<endl;
    }
}

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    printsubset(a, 7);
}