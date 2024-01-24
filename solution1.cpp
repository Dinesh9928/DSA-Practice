#include<bits/stdc++.h>
using namespace std;

class solution {
     public:
     int total_cost(vector<int> arr)
     {
         if(arr.size()==0)
         return 0;
         int ans=0;
         for(auto age: arr){
          
          if( age > 2 && age< 18)
           ans+=100;
         else if(age >=18 && age< 60)
           ans+=500;
           else if(age>=60)
           ans+=300;

         }
         return ans;

     }

 };

int main()
{
    vector<int> arr={2,18,17,55,60,100};
    solution s;
    cout<<s.total_cost(arr);

}