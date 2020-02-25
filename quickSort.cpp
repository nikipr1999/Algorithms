#include<bits/stdc++.h>
using namespace std;

void swap_(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int part(int arr[],int low,int high)
{
    int i=low-1,j=low,pivot=high;
    for(j;j<high;j++)
    {
        if(arr[j]<arr[pivot])
        {
            i++;
            swap_(&arr[i],&arr[j]);
        }

    }
    i++;
    swap_(&arr[i],&arr[pivot]);
    return i;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=part(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);

    }
}
int main()
{
    int arr[10]={5,6 ,3,73,8,1,2,33,98,65};
    for(int i=0;i<10;i++)
        cout<<arr[i]<<"  ";
    quickSort(arr,0,9);

    cout<<"\nAfter quick sort the array is :\n";
    for(int i=0;i<10;i++)
        cout<<arr[i]<<"  ";
    return 0;
}
