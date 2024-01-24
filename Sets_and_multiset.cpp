# include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s; // set<int greater<int>> to store element in decending order
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    // for(auto i: s)
    //  cout<<i<<" ";
    //  cout<<endl;
    //  cout<<s.size();
    //   cout<<endl;
    //  s.erase(3);
    // s.erase(s.begin()); //remove element at begin;
    //  for(auto i: s)
    //  cout<<i<<" ";
    //  cout<<*s.lower_bound(1)<<endl;
    //  cout<<*s.upper_bound(1)<<endl;
    //  cout<<(s.upper_bound(3) == s.end())<<endl; // if upper bond does not exist return 1; 

}
// int main()
// {
//     set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(2);
//     s.insert(3);
//     for(auto i: s)
//      cout<<i<<" ";
//      cout<<endl;
//      cout<<s.size();
//       cout<<endl;
//      s.erase(2);
//      for(auto i: s)
//      cout<<i<<" ";
// }