#include<bits/stdc++.h>
using namespace std;
//heap sort(min heap)
void heapify(int arr[],int n,int i)//Function which build min heap
{
    int left=2*i;
    int right=2*i+1;
    int smallest=i;
    if(n>left and arr[smallest]>arr[left])
    {
        smallest=left;
    }
    if(n>right and arr[smallest]>arr[right])
    {
        smallest=right;
    }
    if(i!=smallest)
    {
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);//build min heap
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);//swap the elements 
        heapify(arr,i,0);//re-build min heap 
    }
}
int main()
{
    int arr[10]={10,90,8,7,6,5,4,3,2,1};
    cout<<"Before sorting"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting"<<endl;
    heapsort(arr,10);
    for(int i=9;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}