# include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int h)
{
    int B[h+1];
    int i=l;
    int j=mid+1;
    int k=l;
    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
        {
            B[k]=arr[i];
            k++; i++;
        }
        else{
            B[k]=arr[j];
            k++; j++;
        }

    }
    while(i<=mid)
    {
        B[k]=arr[i];
        k++; i++;
    }
    while(j<=h)
    {
        B[k]=arr[j];
        k++; j++;
    }
    if(i>mid && j>h)
    for(int i=l; i<h+1; i++)
    {
        arr[i] = B[i];
    }
}

void mergesort(int arr[], int l, int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, h);
        merge(arr, l, mid, h);

    }
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    mergesort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}


