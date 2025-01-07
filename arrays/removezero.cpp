// remove zero from an array
#include <iostream>
using namespace std;
int main() {
   int arr []={1,0,2,0,3};
   int j=0;
   for(int i=0 ;i<5;i++)
   {
       if(arr[i]!=0)
       {
           arr[j]=arr[i]; // whenever i is not 0 , put arr[i] into arr[j]
           j++;
       }
   }
   for(int i=j;i<5;i++)
   {
           arr[i]=0;
   }
   for(int j=0;j<5;j++)
   {
       cout<<arr[j];
   }
}