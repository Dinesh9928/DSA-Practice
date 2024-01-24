# include<bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return first(arr, n, i+1, key);


}
int last(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarry=last(arr, n, i+1, key);

    if(restarry!=-1)
    {
        return restarry;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;

}

int main()
{
    int arr[11] = {1,3,2,4,5,6,2,5,4,7,9};
    int key;
    cin>>key;
    cout<<first(arr,11,0, key)<<endl;
    cout<<last(arr, 11, 0, key);


}