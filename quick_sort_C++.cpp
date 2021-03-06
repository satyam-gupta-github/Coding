#include <bits/stdc++.h>
using namespace std;
int partitionn(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(;j<e;j++)
    {
        if(a[j]<= pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void quicksort(int *a,int s,int e)
{
   if(s>=e)
   {
       return;
   }
   int p=partitionn(a,s,e);
   quicksort(a,s,p-1);
   quicksort(a,p+1,e);
}
int main ()
{
    int a[]={8,4,6,7,9,5,3,1,2};
    int n=sizeof(a)/sizeof(int);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
