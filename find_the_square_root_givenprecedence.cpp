#include<bits/stdc++.h>
using namespace std;

float squar(int num, int pre)
{
    int low = 1, high =num;
    float ans;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;

        if(mid*mid==num){
          ans = mid;
          break;}
        
        else if(mid*mid<num)
        {
            low = mid+1;
            ans=mid;
        }
        else
          high = mid-1;
    }
    float increment =0.1;
    for(int i=0; i<pre; i++)
    {
        while(ans*ans<=num)
        {
            ans+=increment;
        }
        ans -= increment;
        increment /=10;
    }
    return ans;
    

}

int main()
{
    cout<<squar(10, 4)<<endl;
    return 0;
}