# include<bits/stdc++.h>
using namespace std;
void removedup(int arr[], int n)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
     s.insert(arr[i]);

     for(auto i : s)
     { 
         cout<<i<<" ";
     }

}

int main()
{
    int arr[]={23,3,3,5,6,6,78,5};
    removedup(arr,8);
    return 0;
}