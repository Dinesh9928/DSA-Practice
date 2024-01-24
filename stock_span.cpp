# include<bits/stdc++.h>
using namespace std;

vector<int> stock_span(vector<int>arr)
{
    stack<pair<int, int>> s;
    vector<int> a;
    for(auto price: arr)
    {
        int day=1;
        while(!s.empty() && s.top().first<price)
        {
            day+=s.top().second;
            s.pop();
        }
        s.push({price,day});
        a.push_back(day);
    }
    return a;
}

int main()
{
    vector<int> arr={100,80,60,70,60,75,85};
    vector<int> a=stock_span(arr);
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}