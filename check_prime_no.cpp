# include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    // for(int i=2;i<num;i++)
    // {
    //     if(num%i==0){
    //     cout<<"not prime"<<endl;
    //     return 0;}
    // }
    // cout<<"prime";
    // return 0;
    for(int i=2; i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<"not prime"<<endl;
            return 0;
        }
    }
    cout<<"prime: "<<endl;
    return 0;


}