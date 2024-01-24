# include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=20;
    int* aptr;
    aptr=&a;
    int **ptr;
    ptr = &aptr;
    cout<<*ptr<<endl;
    cout<<**ptr<<endl;
    // cout<<*aptr<<endl;
    // *aptr=70;

    // cout<<*aptr<<endl;
    // cout<<a<<endl;
    // int arr[]={1,3,4,5};
    // cout<<*arr<<endl;

    // int* ptr=arr;

    // for(int i=0; i<4; i++)
    // {
    //     cout<<*(arr+i)<<endl;
    //     //arr++;
    // }
    

    
}