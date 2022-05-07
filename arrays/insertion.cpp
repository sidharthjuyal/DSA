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

void indexInsertion(int arr[], int size, int element, int capacity, int index)
{
    // insertion
    if(size>capacity)
    {
        cout<<"You cannot insert more elements...\n";
    }
    for(int i=size; i> index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index]= element;
}

int main()
{
   int arr[100] = {11,23,66,78};
   display(arr, 4);
   int size=4, element= 45;
   indexInsertion(arr, size, element, 100, 2); 
   size++;
   display(arr, size);

   return 0;
}
