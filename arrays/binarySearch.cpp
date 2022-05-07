#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int element)
{
    int s,e,mid,ans;
    s=0;
    e=size-1;
    mid = s + (e-s)/2;

    while(s<e){
      if(element == arr[mid])
      {
          return 1;
      }
      if(element < arr[mid])
      {
          e = mid;
      }
      if(element > arr[mid])
      {
          s=mid+1;
      }
      mid = s + (e-s)/2;
    }
    return 0;
}

int main(){
    int arr[7]={11,22,33,44,66,77,99};
    int element = 22;
    bool flag = binarySearch(arr, 7, element);
    if(flag)
      cout<<"element found.\n";
      else
      cout<<"element not found.\n";
    return 0;
}
