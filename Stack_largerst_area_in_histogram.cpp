# include<bits/stdc++.h>
using namespace std;
int find(vector<int> arr)
{
    int n = arr.size();
    int ans=0, i=0;
    stack<int> st;
    arr.push_back(0);
    while(i<n)
    {
        while(!st.empty()and arr[st.top()]>arr[i])
         {
             int t = st.top();
             int h = arr[t];
             st.pop();
             if(st.empty())
             {
                 ans = max(ans, h*i);
             }
             else
             {
                 int len = i -st.top()-1;
                 ans= max(ans, h*len);
             }
         }
         st.push(i);
         i++;
    }
    return ans;

}

int main()
{
    vector<int> arr={2,1,5,6,2,3};
    cout<<find(arr)<<endl;
    return 0;

}