# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
      cin>>v[i];

    map<int, int> freq;    // unordered_map<int, int> freq; // To create unorder maps
    for(int i =0; i<n; i++)
      freq[v[i]]++;

    map<int, int>:: iterator it;   // unordered_map<int, int> freq;
    for(it = freq.begin(); it !=freq.end() ;it++)
      cout<<it->first<<" "<<it->second<<endl;

}