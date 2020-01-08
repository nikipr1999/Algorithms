#include<iostream>
using namespace std;

 // to search in an array by:
 // 1. Unordered linear search
 // 2. Ordered linear search
 // 3. Binary search
 // 4. Interpolation search

  /* Other methods of searching are:
    Binary search trees
    Symbol Tables and Hashing
    String searching algorithms : Tries, Ternary Search , Suffix Trees
  */

  int UnorderedLinearSearch(int A[],int n, int data)
  {
      for(int i=0;i<n;i++)
      {
          if(A[i]==data)
         return i;
      }
      return -1;
  }

  int OrderedLinearSearch(int A[],int n, int data)
  {
      for(int i=0;i<n;i++)
      {
          if(A[i]==data)
                return i;

         else if(A[i]>data)
                 return -1;
      }
      return -1;
  }

  // Iterative Binary Search Algorithm
  int BinarySearchIterative(int A[],int n, int data)
  {
        int low=0, high=n-1,mid;
        while(low<high)
        {
            mid=(high+low)/2;
            if(A[mid]==data)
                return mid;

            else if(A[mid]<data)
                low=mid+1;

            else
                high=mid-1;
        }

      return -1;
  }

  //Recursive Binary Search Algorithm
  int BinarySearchRecursive(int A[],int low,int high, int data)
  {
        int mid;
        mid=(high+low)/2;

            if(low>high)
                return -1;
            if(A[mid]==data)
                return mid;

            else if(A[mid]<data)
               return BinarySearchRecursive(A,mid+1,high,data);

            else
              return BinarySearchRecursive(A,low,mid-1,data);

      return -1;
  }

  // Interpolation Search

  /* Interpolation is a process of constructing new data points within the range
     of a discrete set of known data points
     It is often required to interpolate (i.e. estimate) the value of that function
     for an intermediate value of the independent variable.
  */

  int InterpolationSearch(int A[],int n, int data)
  {
        int low=0, high=n-1,mid;
        while(low<high)
        {

            mid=low + (data-A[low])*(high-low)/(A[high]-A[low]);   //  The pivot is selected

            if(A[mid]==data)
                return mid;

            else if(A[mid]<data)
                low=mid+1;

            else
                high=mid-1;
        }

      return -1;
  }

  int main()
  {
      int A[10]={1,2,43,67,4,5,132,2,3,373};
      int B[10]={10,20,25,30,33,45,56,57,58,90};

       cout<< "\n\tUnordered Linear Search : "<<UnorderedLinearSearch(A,10,3);

       cout<< "\n\tOrdered Linear Search : "<<OrderedLinearSearch(B,10,30);

       cout<< "\n\tBinary Search Iterative : "<<BinarySearchIterative(B,10,45);

       cout<< "\n\tBinary Search Recursive : "<<BinarySearchRecursive(B,0,9,56);

       cout<< "\n\tInterpolation Search : "<<InterpolationSearch(B,10,58);

      return 0;
  }

