#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int start,int end,int key)
{
    int mid=(start+end)/2;
    if(start>end)
    return -1;
    if(a[mid]==key)
    return mid;
    if(a[mid]<key)
    return binarysearch(a,mid+1,end,key);
    if(a[mid]>key)
    return binarysearch(a,start,mid-1,key);
}
int findpivot(int a[],int start,int end)
{   int mid=(start+end)/2;
    if(start>end)
    return -1;
    if(start==end)
    return end;
    if(mid<end&&a[mid]>a[mid+1])
    return mid;
    if(mid>start&&a[mid]<a[mid-1])
    return (mid-1);
    if(a[start]>=a[mid])
    return findpivot(a,start,mid-1);
    
    return findpivot(a,mid+1,end);
}
int pivotsearch(int a[],int n,int key)
{
    int pivot=findpivot(a,0,n-1);
    if(pivot==-1)
    return binarysearch(a,0,n-1,key);
    if(a[pivot]==key)
    return pivot;
    if(a[0]<=key)
    return binarysearch(a,0,pivot-1,key);
    return binarysearch(a,pivot+1,n-1,key);
}
int main() 
{ 
    // Let us search 3 in below array 
    int arr1[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 }; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    int key = 3; 
  
    // Function calling 
    cout << "Index of the element is : "
         << pivotsearch(arr1, n, key); 
  
    return 0; 
} 