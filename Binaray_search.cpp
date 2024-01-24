# include<bits/stdc++.h>
using namespace std;

void binarysearch(int arr[], int key, int n)
{
    int low, high;
    low=0;
    high=n-1;
    bool find=false;
    while(low<=high)
    {
       int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"at index "<<mid<<" ";
            find=true;
            break;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(find)
    cout<<"Element found"<<endl;
    else
    cout<<"Element not found"<<endl;
}

int main()
{
    int key;
    cin>>key;
    int a[10]={1,3,4,5,12,18,21,23,45,56};
    binarysearch(a, key, 10);

}