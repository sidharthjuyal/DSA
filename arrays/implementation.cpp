// array implementation 1

#include<iostream>
using namespace std;

class myArray{
   int total_size;  // total size of array
   int used_size;   // used size
   int *ptr;        // array element pointer
   
   public:
   myArray(myArray *a, int tSize, int uSize)   // constructor to initialize values
   {
    (*a).total_size = tSize;
    (*a).used_size = uSize;
    (*a).ptr = new int;   
   }

   void setVal(myArray a)     // set values of elements
   {
       int n;
       for(int i=0; i<a.used_size; i++)
       {
          cout<<"Enter element "<<i+1<<": ";
          cin>>n;
          (a.ptr)[i] = n;
       }
   }

   
   void show(myArray a)     // show elements
   {
       for(int i=0; i<a.used_size; i++)
       {
          cout<<(a.ptr)[i]<<" ";
       }
   }

};

int main()
{
   system("cls");
   myArray marks(&marks, 5, 2);
   marks.setVal(marks);
   marks.show(marks);

   return 0;
}
