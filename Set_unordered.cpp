# include<bits/stdc++.h>
using namespace std;
// undorder in nature does not contain repeating item
// faster than set and multiset
int main()
{
   unordered_set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    for(auto i: s)
     cout<<i<<" ";
     cout<<endl;
     cout<<s.size();
      cout<<endl;
     s.erase(2);
     for(auto i: s)
     cout<<i<<" ";
}