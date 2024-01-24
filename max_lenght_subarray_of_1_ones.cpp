# include<bits/stdc++.h>
using namespace std;


int maxi(vector<int> arr, int k)
{
   int n = arr.size();
    if(n<1)
    return 0;
    if(n==1)
    {
        if(arr[0]==1)
        return 1;
        else
         return 0;
    }
    int ans=0;
    int curr=0;
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1 || k>0){
            curr++;
            ans=max(curr,ans);
            k--;
        }
        else{
            curr=0;
        }
    }
    return ans;
}
int main()
{
    // vector<int> arr={1,1,1,0,0,0,1,1,1,1,0};
    // cout<<maxi(arr,3)<<endl;
    vector<int> arr(20,-1);
    for(auto i: arr)
    cout<<i<<" ";
    return 0;
}