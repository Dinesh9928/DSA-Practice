# include<bits/stdc++.h>

using namespace std;

int main()
{
   string s1="kfsjafiewfwfkafio fawefaffza";
   char mx='a';
   for(int i=0; i<s1.size(); i++)
   {
       mx = max(s1[i], mx);
   }
   cout<<mx<<endl;

}