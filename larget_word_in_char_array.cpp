# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int ans=0, curr=0;
    int i =0, st=0, maxst=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(curr>ans)
            {
                ans = curr;
                maxst= st;
            }
            
            curr=0;
            st = i+1;
            
        }
        
        else{
            curr++;
        }
        if(arr[i]=='\0')
        break;
        i++;
    }
    cout<<ans<<endl;
    for(int i=0; i<maxst; i++)
    {
        cout<<arr[i+maxst];
    }

return 0;
}
