# include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
        int n = height.size();
        if(n<1)
        {
            return 0;
        }
        int ans =0;
        int left[n], right[n];
        
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(int i=1;i<n; i++) {
            
            left[i]=max(height[i], left[i-1]);
         }
        for(int i=n-2;i>=0; i--) {
            
            right[i]=max(height[i], right[i+1]);
         }
        for(int i=1;i<n-1; i++)
        {
            ans+=min(left[i],right[i])-height[i];
        }
        return ans;
    }
    int main()
    {
        vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
        cout<<trap(arr)<<endl;
        return 0;
    }