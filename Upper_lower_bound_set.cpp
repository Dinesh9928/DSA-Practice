# include<bits/stdc++.h>
using namespace std;

int main()
{
   vector <int> arr ={34,43,54,54,5,7,34,3,2,3,5,7,8,9,1};
   int n =arr.size();
   sort(arr.begin(), arr.end());

   
     vector<int>::iterator lower, upper;
     lower = lower_bound(arr.begin(), arr.end(), 6);
     upper = upper_bound(arr.begin(), arr.end(), 5);

     cout<<lower -arr.begin()+1<<endl;
     cout<<upper-arr.begin()+1<<endl;
     

}