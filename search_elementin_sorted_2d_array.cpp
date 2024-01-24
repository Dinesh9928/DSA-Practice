# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
     for(int j=0; j<m; j++)
      cin>>arr[i][j];
    }
    int target;
    cin>>target;

    cout<<endl;

    int r=0, c=m-1;

    while(r<n && c>=0)
    {
    if(arr[r][c]<target)
    {
        r++;
    }
    else if(arr[r][c]>target)
    {
        c--;
    }
    else
    {
        cout<<r+1<<" "<<c+1;
        return 0;
    }

    }
    cout<<" -1"<<endl;
    return 0;
}


