# include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{
    int i= l-1;
    int pivot = arr[h];
    for(int j=l; j<h; j++)
    {
        if(arr[j]<pivot)
        {
         i++;
         swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}

void quicksort(int arr[], int l, int h)
{
    if(l<h)
    {
        int pi = partition(arr, l, h);
        quicksort(arr, l, pi-1);
        quicksort(arr, pi+1, h);
    }
}



int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    cin>>A[i];
   
    
    quicksort(A, 0, n-1);

    for(int i=0; i<n; i++)
    cout<<A[i]<<" ";

    return 0;

}