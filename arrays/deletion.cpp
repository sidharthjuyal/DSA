// array operations

#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    // traversal
   cout<<"printing array: ";
   for(int i = 0; i< n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void indexDeletion(int arr[], int size, int index)
{
    // deletion
    for(int i=index; i<size; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
   int arr[100] = {11,23,66,78};
   display(arr, 4);
   int size=4;
   indexDeletion(arr, size, 2);
   size--; 
   display(arr, size);

   return 0;
}
