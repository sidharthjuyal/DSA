#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int element)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
       if(element == arr[i])
         flag++;
    }
    if(flag)
      cout<<"\nElement found.";
      else
      cout<<"\nElement not found.";
}

int main(){
    int arr[7]={11,99,77,81,66,34,55};
    int element = 35;
    linearSearch(arr, 7, element);
    return 0;
}
