# include<bits/stdc++.h>
using namespace std;

void swap(int *X, int *y)
{
    int temp=*X;
    *X=*y;
    *y=temp;
}

int main()
{
    int a=20, b=40;
    cout<<a<<" "<<b<<endl;
    // swap(a,b);
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
    return 0;
}