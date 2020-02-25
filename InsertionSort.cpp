#include<iostream>
#include<stdlib.h>
using namespace std;
int c=0;
void InsertionSort(int arr[],int n)
{
    int i,j,key;
    for (j=1;j<n;j++)
    {
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key)
        {   c++;
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }

}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

//driver code
int main()
{
   int n=10;
   int arr[n]={4,3,2,1,4,6,7,8,6,3};


   cout<<"Original array is \n";
   display(arr,n);

   InsertionSort(arr,n);

   cout<<"\nThe sorted array is \n";
   display(arr,n);

   cout<<"\nCount is "<<c;
   return 0;
}
