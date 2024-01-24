# include<bits/stdc++.h>
using namespace std;

bool threesum(vector<int> arr, int target)
{
    int n = arr.size();

    sort(arr.begin(), arr.end());
   
    for(int i=0;i<n;i++)
    {
        int lo=i+1, hi=n-1;
        while(lo<hi)
        {
            int sum = arr[lo] + arr[hi] + arr[i];
            if(sum==target)
            { 
                return 1;
            }
            if(sum<target)
            {
                lo++;
            }
            else
            hi--;
        }

    }
    return 0;
}
int main()
{
    vector<int> arr={12,36,9,34,25};
    cout<<threesum(arr, 46)<<endl;
    return 0;
}